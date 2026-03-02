#include <iostream>

struct X {
  X() = default;
  X(const X&) = default;
  X(X&&) { std::cout << "move ctor" << std::endl; }
};

void f() {
  X x;
  throw x;
}

int main() {
  try {
    f();
  } catch (...) {
  }

  return 0;
}