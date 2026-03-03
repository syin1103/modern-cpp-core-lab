#include <iostream>

void f(void (*)()) {}

void g() {
  f([] {});
}

// void f(void (&)()) {}
// void g() {
//   f(*[] {});
// }

int main() { return 0; }