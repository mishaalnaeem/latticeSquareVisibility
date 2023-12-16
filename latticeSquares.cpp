#include <limits>
#include <cstdint>
#include <iostream>

uint64_t squareCount(uint64_t n) {
   if (n < 0) {
      throw std::invalid_argument("Input must be a non-negative integer");
   }

   if (n > std::numeric_limits<uint64_t>::max() / (n + 1) / (2 * n + 1)) {
      throw std::overflow_error("Overflow detected in squareCount calculation");
   }

   return (n*(n+1)*(2*n + 1))/6;
}

/* for an n
      n^2 squares of 1x1, (n-1)^2 of size 2x2, (n-2)^2 of size 3x3 and so on.. (n - (n-1))^2

      n=1, n^2
      n=2, n^2 + (n-1)^2 = 4 + 1 = 5

      Loop from 1 to n till i=n and sum square of i

      Pattern: sum of perfect n squares or
      Total squares = (n(n+1)(2n+1))/6 

      Ref: https://www.cuemath.com/sum-of-perfect-squares-formula/
*/