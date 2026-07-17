#include <iostream>

template <class... Args>
void foo(Args... args) {}

template <class... Args>
class bar {};

int main() {
  unsigned int x = 8;
  foo();
  foo(1);
  foo(1, 11.7);
  foo(1, 11.7, x);

  bar<> b1;
  bar<int> b2;
  bar<int, double> b3;
  bar<int, double, unsigned int> b4;

  return 0;
}