#include <iostream>

void (*fp1)() noexcept = nullptr;
void foo1() {}

void (*fp2)() = nullptr;
void foo2() noexcept {}

int main() {
  // fp1 = &foo1; // compilation failure after C++17
  std::cout << std::is_same_v<decltype(fp1), decltype(&foo1)> << std::endl;

  fp2 = &foo2;
  std::cout << std::is_same_v<decltype(fp2), decltype(&foo2)> << std::endl;

  return 0;
}