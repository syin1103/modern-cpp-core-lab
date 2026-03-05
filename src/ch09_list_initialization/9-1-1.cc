#include <iostream>

struct C {
  C(int a) {}
};

void foo(C c) {}
C bar() { return 5; }

int main() {
  foo(8);       // copy Initialization
  C c = bar();  // copy Initialization
  return 0;
}