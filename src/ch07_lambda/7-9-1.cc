#include <iostream>

template <typename T>
void g(T) {}

struct Foo {
  int n = 0;
  void f(int a) {
    g([=, this](int k) { return n + a * k; });
  }
};

int main() { return 0; }