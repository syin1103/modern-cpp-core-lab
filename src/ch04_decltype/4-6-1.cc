#include <iostream>

template <decltype(auto) N>
void f() {
  std::cout << N << std::endl;
}

static const int x = 11;
static int y = 7;

int main() {
  f<x>();    // N is of type const int
  f<(x)>();  // N is of type const int&
  // f<y>(); // compilation error
  f<(y)>();  // N is of type int&
  return 0;
}