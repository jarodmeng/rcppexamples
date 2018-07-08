#include <Rcpp.h>
#include <cmath>
using namespace Rcpp;

// [[Rcpp::export]]
double SquareRoot(int x) {
  if (x <= 0) {
    stop("Invalid input");
  }
  return std::pow(x, 0.5);
}

/*** R
SquareRoot(42)
*/
