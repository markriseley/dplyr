// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dplyr.h"
#include <Rcpp.h>

using namespace Rcpp;

// loc
CharacterVector loc(RObject data);
RcppExport SEXP dplyr_loc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(loc(data));
    return rcpp_result_gen;
END_RCPP
}
// dfloc
CharacterVector dfloc(List df);
RcppExport SEXP dplyr_dfloc(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(dfloc(df));
    return rcpp_result_gen;
END_RCPP
}
// plfloc
CharacterVector plfloc(Pairlist data);
RcppExport SEXP dplyr_plfloc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Pairlist >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(plfloc(data));
    return rcpp_result_gen;
END_RCPP
}
// arrange_impl
List arrange_impl(DataFrame data, LazyDots dots);
RcppExport SEXP dplyr_arrange_impl(SEXP dataSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(arrange_impl(data, dots));
    return rcpp_result_gen;
END_RCPP
}
// order_impl
IntegerVector order_impl(List args, Environment env);
RcppExport SEXP dplyr_order_impl(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(order_impl(args, env));
    return rcpp_result_gen;
END_RCPP
}
// sort_impl
DataFrame sort_impl(DataFrame data);
RcppExport SEXP dplyr_sort_impl(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(sort_impl(data));
    return rcpp_result_gen;
END_RCPP
}
// between
LogicalVector between(NumericVector x, double left, double right);
RcppExport SEXP dplyr_between(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type left(leftSEXP);
    Rcpp::traits::input_parameter< double >::type right(rightSEXP);
    rcpp_result_gen = Rcpp::wrap(between(x, left, right));
    return rcpp_result_gen;
END_RCPP
}
// bind_rows_
List bind_rows_(List dots, SEXP id);
RcppExport SEXP dplyr_bind_rows_(SEXP dotsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dots(dotsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(bind_rows_(dots, id));
    return rcpp_result_gen;
END_RCPP
}
// rbind_list__impl
List rbind_list__impl(Dots dots);
RcppExport SEXP dplyr_rbind_list__impl(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Dots >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(rbind_list__impl(dots));
    return rcpp_result_gen;
END_RCPP
}
// cbind_all
List cbind_all(List dots);
RcppExport SEXP dplyr_cbind_all(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(cbind_all(dots));
    return rcpp_result_gen;
END_RCPP
}
// combine_all
SEXP combine_all(List data);
RcppExport SEXP dplyr_combine_all(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(combine_all(data));
    return rcpp_result_gen;
END_RCPP
}
// combine_vars
SEXP combine_vars(CharacterVector vars, ListOf<IntegerVector> xs);
RcppExport SEXP dplyr_combine_vars(SEXP varsSEXP, SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< ListOf<IntegerVector> >::type xs(xsSEXP);
    rcpp_result_gen = Rcpp::wrap(combine_vars(vars, xs));
    return rcpp_result_gen;
END_RCPP
}
// strings_addresses
CharacterVector strings_addresses(CharacterVector s);
RcppExport SEXP dplyr_strings_addresses(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(strings_addresses(s));
    return rcpp_result_gen;
END_RCPP
}
// gp
unsigned short gp(SEXP x);
RcppExport SEXP dplyr_gp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(gp(x));
    return rcpp_result_gen;
END_RCPP
}
// distinct_impl
SEXP distinct_impl(DataFrame df, CharacterVector vars, CharacterVector keep);
RcppExport SEXP dplyr_distinct_impl(SEXP dfSEXP, SEXP varsSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(distinct_impl(df, vars, keep));
    return rcpp_result_gen;
END_RCPP
}
// n_distinct_multi
SEXP n_distinct_multi(List variables, bool na_rm);
RcppExport SEXP dplyr_n_distinct_multi(SEXP variablesSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type variables(variablesSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(n_distinct_multi(variables, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// assert_all_white_list
void assert_all_white_list(const DataFrame& data);
RcppExport SEXP dplyr_assert_all_white_list(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    assert_all_white_list(data);
    return R_NilValue;
END_RCPP
}
// shallow_copy
SEXP shallow_copy(const List& data);
RcppExport SEXP dplyr_shallow_copy(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(shallow_copy(data));
    return rcpp_result_gen;
END_RCPP
}
// compatible_data_frame_nonames
dplyr::BoolResult compatible_data_frame_nonames(DataFrame x, DataFrame y, bool convert);
RcppExport SEXP dplyr_compatible_data_frame_nonames(SEXP xSEXP, SEXP ySEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(compatible_data_frame_nonames(x, y, convert));
    return rcpp_result_gen;
END_RCPP
}
// compatible_data_frame
dplyr::BoolResult compatible_data_frame(DataFrame x, DataFrame y, bool ignore_col_order, bool convert);
RcppExport SEXP dplyr_compatible_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(compatible_data_frame(x, y, ignore_col_order, convert));
    return rcpp_result_gen;
END_RCPP
}
// equal_data_frame
dplyr::BoolResult equal_data_frame(DataFrame x, DataFrame y, bool ignore_col_order, bool ignore_row_order, bool convert);
RcppExport SEXP dplyr_equal_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP ignore_row_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_row_order(ignore_row_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(equal_data_frame(x, y, ignore_col_order, ignore_row_order, convert));
    return rcpp_result_gen;
END_RCPP
}
// all_equal_data_frame
dplyr::BoolResult all_equal_data_frame(List args, Environment env);
RcppExport SEXP dplyr_all_equal_data_frame(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(all_equal_data_frame(args, env));
    return rcpp_result_gen;
END_RCPP
}
// union_data_frame
DataFrame union_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_union_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(union_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// intersect_data_frame
DataFrame intersect_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_intersect_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// setdiff_data_frame
DataFrame setdiff_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_setdiff_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(setdiff_data_frame(x, y));
    return rcpp_result_gen;
END_RCPP
}
// resolve_vars
SEXP resolve_vars(List new_groups, CharacterVector names);
RcppExport SEXP dplyr_resolve_vars(SEXP new_groupsSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type new_groups(new_groupsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(resolve_vars(new_groups, names));
    return rcpp_result_gen;
END_RCPP
}
// grouped_df_impl
DataFrame grouped_df_impl(DataFrame data, ListOf<Symbol> symbols, bool drop);
RcppExport SEXP dplyr_grouped_df_impl(SEXP dataSEXP, SEXP symbolsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_df_impl(data, symbols, drop));
    return rcpp_result_gen;
END_RCPP
}
// mutate_impl
SEXP mutate_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_mutate_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(mutate_impl(df, dots));
    return rcpp_result_gen;
END_RCPP
}
// as_regular_df
DataFrame as_regular_df(DataFrame df);
RcppExport SEXP dplyr_as_regular_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(as_regular_df(df));
    return rcpp_result_gen;
END_RCPP
}
// ungroup_grouped_df
DataFrame ungroup_grouped_df(DataFrame df);
RcppExport SEXP dplyr_ungroup_grouped_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(ungroup_grouped_df(df));
    return rcpp_result_gen;
END_RCPP
}
// filter_impl
SEXP filter_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_filter_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_impl(df, dots));
    return rcpp_result_gen;
END_RCPP
}
// grouped_indices_grouped_df_impl
IntegerVector grouped_indices_grouped_df_impl(GroupedDataFrame gdf);
RcppExport SEXP dplyr_grouped_indices_grouped_df_impl(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_indices_grouped_df_impl(gdf));
    return rcpp_result_gen;
END_RCPP
}
// grouped_indices_impl
IntegerVector grouped_indices_impl(DataFrame data, ListOf<Symbol> symbols);
RcppExport SEXP dplyr_grouped_indices_impl(SEXP dataSEXP, SEXP symbolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_indices_impl(data, symbols));
    return rcpp_result_gen;
END_RCPP
}
// group_size_grouped_cpp
IntegerVector group_size_grouped_cpp(GroupedDataFrame gdf);
RcppExport SEXP dplyr_group_size_grouped_cpp(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    rcpp_result_gen = Rcpp::wrap(group_size_grouped_cpp(gdf));
    return rcpp_result_gen;
END_RCPP
}
// semi_join_impl
DataFrame semi_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_semi_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    rcpp_result_gen = Rcpp::wrap(semi_join_impl(x, y, by_x, by_y));
    return rcpp_result_gen;
END_RCPP
}
// anti_join_impl
DataFrame anti_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_anti_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    rcpp_result_gen = Rcpp::wrap(anti_join_impl(x, y, by_x, by_y));
    return rcpp_result_gen;
END_RCPP
}
// inner_join_impl
DataFrame inner_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y, std::string& suffix_x, std::string& suffix_y);
RcppExport SEXP dplyr_inner_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP suffix_xSEXP, SEXP suffix_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_x(suffix_xSEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_y(suffix_ySEXP);
    rcpp_result_gen = Rcpp::wrap(inner_join_impl(x, y, by_x, by_y, suffix_x, suffix_y));
    return rcpp_result_gen;
END_RCPP
}
// left_join_impl
DataFrame left_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y, std::string& suffix_x, std::string& suffix_y);
RcppExport SEXP dplyr_left_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP suffix_xSEXP, SEXP suffix_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_x(suffix_xSEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_y(suffix_ySEXP);
    rcpp_result_gen = Rcpp::wrap(left_join_impl(x, y, by_x, by_y, suffix_x, suffix_y));
    return rcpp_result_gen;
END_RCPP
}
// right_join_impl
DataFrame right_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y, std::string& suffix_x, std::string& suffix_y);
RcppExport SEXP dplyr_right_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP suffix_xSEXP, SEXP suffix_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_x(suffix_xSEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_y(suffix_ySEXP);
    rcpp_result_gen = Rcpp::wrap(right_join_impl(x, y, by_x, by_y, suffix_x, suffix_y));
    return rcpp_result_gen;
END_RCPP
}
// full_join_impl
DataFrame full_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y, std::string& suffix_x, std::string& suffix_y);
RcppExport SEXP dplyr_full_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP, SEXP suffix_xSEXP, SEXP suffix_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_x(suffix_xSEXP);
    Rcpp::traits::input_parameter< std::string& >::type suffix_y(suffix_ySEXP);
    rcpp_result_gen = Rcpp::wrap(full_join_impl(x, y, by_x, by_y, suffix_x, suffix_y));
    return rcpp_result_gen;
END_RCPP
}
// slice_impl
SEXP slice_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_slice_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(slice_impl(df, dots));
    return rcpp_result_gen;
END_RCPP
}
// select_impl
DataFrame select_impl(DataFrame df, CharacterVector vars);
RcppExport SEXP dplyr_select_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    rcpp_result_gen = Rcpp::wrap(select_impl(df, vars));
    return rcpp_result_gen;
END_RCPP
}
// summarise_impl
SEXP summarise_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_summarise_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(summarise_impl(df, dots));
    return rcpp_result_gen;
END_RCPP
}
// test_comparisons
LogicalVector test_comparisons();
RcppExport SEXP dplyr_test_comparisons() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_comparisons());
    return rcpp_result_gen;
END_RCPP
}
// cumall
LogicalVector cumall(LogicalVector x);
RcppExport SEXP dplyr_cumall(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cumall(x));
    return rcpp_result_gen;
END_RCPP
}
// cumany
LogicalVector cumany(LogicalVector x);
RcppExport SEXP dplyr_cumany(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cumany(x));
    return rcpp_result_gen;
END_RCPP
}
// cummean
NumericVector cummean(NumericVector x);
RcppExport SEXP dplyr_cummean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cummean(x));
    return rcpp_result_gen;
END_RCPP
}
