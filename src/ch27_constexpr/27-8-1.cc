#include <iostream>

class X {
 public:
  static constexpr int num{5};
};

int main() {
  std::cout << &X::num << std::endl;  // error, in C++11
  return 0;
}