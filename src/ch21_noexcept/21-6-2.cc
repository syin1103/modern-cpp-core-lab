#include <iostream>
#include <string>

void (*fp)() noexcept = nullptr;
void foo() { throw(5); }

int main() {
  // Before C++17, it can compile successfully, but the exception cannot be
  // caught, and the program terminates.
  // fp = &foo;  // compilation failure after C++17
  try {
    fp();
  } catch (int e) {
    std::cout << e << std::endl;
  }

  return 0;
}