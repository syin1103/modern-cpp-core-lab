#include <iostream>

// g++ -O0 -std=c++17 -fdump-tree-gimple -S 7-3-2.cc
int main() {
  int x = 5, y = 8;
  auto foo = [=] { return x * y; };
  int z = foo();
  return 0;
}