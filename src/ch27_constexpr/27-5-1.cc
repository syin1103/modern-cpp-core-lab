#include <iostream>

constexpr double sum(double x) { return x > 0 ? x + sum(x - 1) : 0; }

int main() {
  constexpr double x = sum(5);
  std::cout << x << std::endl;
  return 0;
}