#include <iostream>

namespace Parent {
namespace V1 {
void foo() { std::cout << "V1::foo()" << std::endl; }
}  // namespace V1

inline namespace V2 {
void foo() { std::cout << "V2::foo()" << std::endl; }
}  // namespace V2

}  // namespace Parent

int main() {
  Parent::foo();
  Parent::V2::foo();
  return 0;
}