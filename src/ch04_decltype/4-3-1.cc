#include <iostream>

const int&& foo();
int i;
struct A {
  double x;
};

int main() {
  const A* a = new A();

  // decltype(foo());   // deduces to const int&&
  // decltype(i);       // deduces to int
  // decltype(a->x);    // deduces to double
  // decltype((a->x));  // deduces to const double&
  delete a;
  return 0;
}