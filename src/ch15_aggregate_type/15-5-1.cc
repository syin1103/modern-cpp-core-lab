#include <iostream>

struct X {
  int i;
  float f;
};

int main() {
  X x1{11, 7.0f};
  X x2(11, 7.0f);
  return 0;
}