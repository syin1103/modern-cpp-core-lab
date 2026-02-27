#include <iostream>

const int i = 0;

struct A {
  double x;
};

int main() {
  // decltype(i);  // deduces to const int

  const A* a = new A();
  // decltype(a->x);    // deduces to double, ignoring the const qualifier
  // decltype((a->x));  // deduces to const double&
  return 0;
}