#include <iostream>

namespace A {
namespace B {
namespace C {

int value = 10;

}
}  // namespace B
}  // namespace A

namespace A::B::C {
void foo() { std::cout << "A::B::C::foo(), value: " << value << std::endl; }
}  // namespace A::B::C

int main() {
  A::B::C::foo();
  return 0;
}