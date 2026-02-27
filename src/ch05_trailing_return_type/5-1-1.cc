#include <iostream>

int bar_impl(int x) { return x; }

typedef int (*bar)(int);
bar foo1() { return bar_impl; }

auto foo2() -> int (*)(int) { return bar_impl; }

int main() {
  auto func = foo2();
  std::cout << func(58) << std::endl;
  return 0;
}