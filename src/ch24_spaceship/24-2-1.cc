#include <compare>
#include <iostream>

struct B {
  int a;
  long b;
  auto operator<=>(const B&) const = default;
};

struct D : public B {
  short c;
  auto operator<=>(const D&) const = default;
};

int main() {
  D x1, x2;
  std::cout << typeid(decltype(x1 <=> x2)).name() << std::endl;
  return 0;
}