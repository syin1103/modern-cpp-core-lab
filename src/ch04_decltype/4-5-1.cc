#include <iostream>

int i;
int&& f() { return {}; }

int main() {
  auto x1a = i;            // x1a deduces to int
  decltype(auto) x1d = i;  // x1d deduces to int

  auto x2a = (i);            // x2a deduces to int
  decltype(auto) x2d = (i);  // x2d deduces to int&

  auto x3a = f();            // x3a deduces to int
  decltype(auto) x3d = f();  // x3d deduces to int&&

  auto x4a = {1, 2};  // x4a deduces to std::initializer_list<int>
  // decltype(auto) x4d = {1, 2};  // error, {1, 2} is not an expression

  auto* x5a = &i;  // x5a deduces to int*
  // decltype(auto)* x5d = &i;  // error, decltype(auto) must be used alone

  return 0;
}