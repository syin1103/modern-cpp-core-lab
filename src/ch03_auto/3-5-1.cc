#include <cassert>
#include <iostream>

int main() {
  // C++ 14
  auto func1 = [](auto a1, auto a2) { return a1 + a2; };
  auto retval = func1(5, 5.0);
  std::cout << retval << std::endl;

  auto func2 = [](int& i) -> auto& { return i; };
  auto x1 = 5;
  auto& x2 = func2(x1);
  assert(&x1 == &x2);

  return 0;
}
