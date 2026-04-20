#include <cassert>
#include <iostream>

void f(int) { std::cout << "int" << std::endl; }
void f(char*) { std::cout << "char" << std::endl; }

int main() {
  char* ch = nullptr;
  char* ch2 = 0;
  assert(ch == 0);
  assert(ch == nullptr);
  assert(!ch);
  assert(ch2 == nullptr);
  assert(nullptr == 0);

  {
    // int n1 = nullptr;
    // char* ch1 = true ? 0 : nullptr;
    // int n2 = true ? nullptr : nullptr;
    // int n3 = true ? 0 : nullptr;
  }

  f(nullptr);
  return 0;
}