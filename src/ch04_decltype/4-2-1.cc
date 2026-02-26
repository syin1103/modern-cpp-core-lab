#include <iostream>

struct S1 {
  int x1;
  decltype(x1) x2;
  double x3;
  decltype(x2 + x3) x4;
};

int x1 = 0;
decltype(x1) sum(decltype(x1) a1, decltype(a1) a2) { return a1 + a2; }

int main() {
  int x1 = 0;
  decltype(x1) x2 = 0;
  std::cout << typeid(x2).name() << std::endl;  // x2 is int

  double x3 = 0;
  decltype(x1 + x3) x4 = x1 + x3;
  std::cout << typeid(x3).name() << std::endl;  // x1 + x3 is double

  // decltype({x1, x2}) x5; // error, {x1, x2} is not an expression

  auto x6 = sum(5, 10);
  std::cout << typeid(x6).name() << std::endl;  // // x6 is int

  return 0;
}