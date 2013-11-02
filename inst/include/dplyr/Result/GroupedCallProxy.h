#ifndef dplyr_GroupedCallProxy_H
#define dplyr_GroupedCallProxy_H

namespace dplyr {
     
    class GroupedHybridCall {
    public:
        GroupedHybridCall( const Language& call_, const DataFrame& df_, const SlicingIndex& indices_, LazyGroupedSubsets& subsets_ ) : 
            call( clone(call_) ), df( df_ ), indices(indices_) // , subsets(subsets_) 
        {
            while( simplified(call, call) ) ;
        }
        
        SEXP eval(){
            return call.fast_eval() ;    
        }
        
    private:
        
        bool simplified( SEXP obj, SEXP parent ){
            if( TYPEOF(obj) == LISTSXP ){
                bool res = simplified( CAR(obj), parent ) ;
                if( res ) return true ;
                return simplified( CDR(obj), CDR(obj) );
            }
            
            if( TYPEOF(obj) == LANGSXP ) {
                Result* res = get_result( obj, df ) ;
                if( res ){
                    Shield<SEXP> value( res->process(indices) ) ;
                    SETCAR( parent, value ) ;
                    SETCDR( parent, R_NilValue );
                    return true ;
                }
                return simplified( CDR(obj), CDR(obj) );
            }
            return false ;
        }
        
        Language call ;
        const DataFrame& df ;
        const SlicingIndex& indices ;
        // LazyGroupedSubsets& subsets ;
    } ;
    
    class GroupedCallProxy {
    public:
        GroupedCallProxy( Language& call_, const GroupedDataFrame& data_, const Environment& env_) : 
            call(call_), subsets(data_), proxies(), env(env_), data(data_), hybrid(false)
        {
            // fill proxies
            traverse_call(call);
            
            // not yet
            // hybrid = can_simplify_call(call) ; 
            
        }
        
        GroupedCallProxy( const GroupedDataFrame& data_, const Environment& env_ ) : 
            subsets(data_), proxies(), env(env_), data(data_), hybrid(false)
        {
            // not yet
            // hybrid = can_simplify_call(call) ;
        }
        
        ~GroupedCallProxy(){}  
        
        template <typename Container>
        SEXP get(const Container& indices){
            subsets.clear();
            if( hybrid ) return GroupedHybridCall( call, data.data(), indices, subsets ).eval() ; 
            
            int n = proxies.size() ;
            for( int i=0; i<n; i++){
                proxies[i].set( subsets.get(proxies[i].symbol, indices ) ) ;  
            }
            return call.fast_eval() ;
        }
        
        void set_call( SEXP call_ ){
            proxies.clear() ;
            call = call_ ;
            traverse_call(call) ;
        }
        
        void input( Rcpp::String name, SEXP x ){
            subsets.input( as_symbol(name.get_sexp()) , x ) ;
        }
         
        inline int nsubsets(){
            return subsets.size() ;
        }   
        
        inline SEXP get_variable( Rcpp::String name ) const {
            return subsets.get_variable(as_symbol(name.get_sexp()) ) ;
        }
        
        
    private:
        
        inline bool can_simplify_call( SEXP call){
            return can_simplify(call);
        }
        
        void traverse_call( SEXP obj ){
             if( ! Rf_isNull(obj) ){ 
                 SEXP head = CAR(obj) ;
                 switch( TYPEOF( head ) ){
                 case LISTSXP:
                 case LANGSXP: 
                     traverse_call( CDR(head) ) ;
                     break ;
                 case SYMSXP:
                     if( TYPEOF(obj) != LANGSXP ){
                        if( ! subsets.count(head) ){
                            // in the Environment -> resolve
                            // TODO: handle the case where the variable is not found in env
                            Shield<SEXP> x( env.find( CHAR(PRINTNAME(head)) ) ) ;
                            SETCAR( obj, x );
                        } else {
                            // in the data frame
                            proxies.push_back( CallElementProxy( head, obj ) );
                        } 
                     }
                     break ;
                 }
                 traverse_call( CDR(obj) ) ;
             }    
        }
        
        Rcpp::Language call ;
        LazyGroupedSubsets subsets ;
        std::vector<CallElementProxy> proxies ;
        const Environment& env; 
        const GroupedDataFrame& data ; 
        bool hybrid ;
    } ;

}

#endif