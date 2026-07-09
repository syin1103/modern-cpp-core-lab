#include <iostream>

struct X {
  constexpr virtual int f() const { return 1; }
};

int main() {
  constexpr X x;
  int i = x.f();
  return 0;
}