#include <iostream>

int x;

int main() {
  int y = 2;
  static int z = 3;

  // auto foo = [x, y, z] {};  // can only capture non-static local variables.
  auto foo = [y] { return x + y + z; };

  std::cout << foo() << std::endl;

  return 0;
}