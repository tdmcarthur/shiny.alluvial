// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// accumpaste
CharacterVector accumpaste(CharacterVector x, NumericVector sid);
RcppExport SEXP _shiny_alluvial_accumpaste(SEXP xSEXP, SEXP sidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sid(sidSEXP);
    rcpp_result_gen = Rcpp::wrap(accumpaste(x, sid));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_shiny_alluvial_accumpaste", (DL_FUNC) &_shiny_alluvial_accumpaste, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_shiny_alluvial(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
