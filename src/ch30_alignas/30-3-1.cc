#include <iostream>

int main() {
  auto x1 = alignof(int);
  auto x2 = alignof(void (*)());

  std::cout << x1 << std::endl;
  std::cout << x2 << std::endl;

  int a = 0;
  auto x3 = alignof(a);

  return 0;
}