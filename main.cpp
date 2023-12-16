#include "latticeSquares.cpp"

int main() {
   uint32_t n;
   std::cout << "Input n for sqaure counts. Input 0 to exit.\n";
   std::cin >> n;
   while(n != 0) {
      std::cout << "Square count of " << n << " is: " << squareCount(n) << "\n";
      std::cout << "Input n for sqaure counts. Input 0 to exit.\n";
      std::cin >> n;
   }
}