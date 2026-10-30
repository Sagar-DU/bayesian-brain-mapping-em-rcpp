// [[Rcpp:depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

using namespace Rcpp;
using namespace arma;

//[[Rcpp::export]]
List UpdateTheta_BrainMap_independent_cpp (
  const arma::mat& prior_mean,  // nV x nL
  const arma::mat& prior_var,   // nV x nL
  const arma::mat& BOLD,        // nV x nT
  const List& theta,            // list with A (nT x nL), nu0_sq (scalar)
  const arma::vec & C_diag,     // length nT
  Nullable<arma::mat> H = R_NilValue,
  Nullable<arma::mat> Hinv = R_NilValue,
  bool update_nu0sq = true,
  bool return_MAP = false,
  bool verbose = true
){

}
