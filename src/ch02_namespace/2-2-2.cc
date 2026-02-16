#include <iostream>

namespace A::B::inline C {
void foo1() { std::cout << "A::B::C::foo1()" << std::endl; }
}  // namespace A::B::inline C

namespace D::inline E::F {
void foo2() { std::cout << "D::E::F::foo2()" << std::endl; }
}  // namespace D::inline E::F

int main() {
  A::B::foo1();
  D::F::foo2();
  return 0;
}