#include <iostream>

consteval int sqr(int n) { return n * n; }

consteval int sqrsqr(int n) { return sqr(sqr(n)); }

int main() {
  constexpr int r = sqr(100);

  int x = 100;
  // int r2 = sqr(x);  // error

  int y1 = sqrsqr(100);
  // int y2 = sqrsqr(x);  // error

  auto sqr1 = [](int n) consteval { return n * n; };
  int r3 = sqr(100);

  // auto f = sqr; // error

  return 0;
}