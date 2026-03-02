#include <iostream>

void bar1() {
  int x = 5, y = 8;
  auto foo = [x, y] {
    // x += 1;  // cannot modify the value of captured variables
    // y += 2;  // cannot modify the value of captured variables
    return x * y;
  };
  std::cout << foo() << std::endl;
}

void bar2() {
  int x = 5, y = 8;
  auto foo = [&x, &y] {
    x += 1;
    y += 2;
    return x * y;
  };
  std::cout << foo() << std::endl;
}

void bar3() {
  int x = 5, y = 8;
  auto foo = [x, y]() mutable {
    x += 1;
    y += 2;
    return x * y;
  };
  std::cout << foo() << std::endl;
}

int main() {
  int x = 5, y = 8;
  auto foo1 = [x, y] { return x * y; };
  auto foo2 = [&x, &y] { return x * y; };

  bar1();
  bar2();
  bar3();

  return 0;
}