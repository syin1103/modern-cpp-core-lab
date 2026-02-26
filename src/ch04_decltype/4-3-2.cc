#include <iostream>

int i;
int* j;
int n[10];
const int&& foo();

struct A {
  int operator()() { return 0; }
};

int main() {
  // decltype(static_cast<short>(i));  // deduces to short
  // decltype(j);                      // deduces to int*
  // decltype(n);                      // deduces to int[10]
  // decltype(foo);                    // deduces to int const && (void)

  A a;
  // decltype(a());  // deduces to int
  return 0;
}