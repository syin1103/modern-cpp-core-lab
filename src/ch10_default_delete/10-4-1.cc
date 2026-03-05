#include <iostream>

struct type {
  type(long long) {}
  explicit type(long) = delete;
};

void foo(type) {}

int main() {
  // foo(type(58)); // error
  foo(58);
  return 0;
}