#include <iostream>

class X {
 public:
  constexpr X() : x1(5) {}
  constexpr X(int i) : x1(i) {}
  constexpr int get() const { return x1; }

 private:
  int x1;
};

int main() {
  constexpr X x;
  char buffer[x.get()] = {0};

  return 0;
}