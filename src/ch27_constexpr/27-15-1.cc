#include <iostream>

constinit int x = 11;

const char* f() { return "hello"; }
constexpr const char* g() { return "cpp"; }

// constinit const char* str1 = f();  // error
constinit const char* str2 = g();

int main() {
  constinit static int y = 42;
  // constinit int z = 7; // error

  return 0;
}