#include <iostream>

struct S {
  int y : 8 = 11;
  int z : 4 {7};
};

int main() { return 0; }