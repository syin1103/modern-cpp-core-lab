#include <iostream>

class X {
 public:
  X() { std::cout << "X ctor" << std::endl; }
  X(const X& x) { std::cout << "X copy ctor" << std::endl; }
  ~X() { std::cout << "X dtor" << std::endl; }

  void show() { std::cout << "show X" << std::endl; }
};

X make_x() {
  X x1;
  return x1;
}

int main() {
  // C++14, 1 ctor and 1 copy ctor; C++17, 1 ctor, 1 copy ctor
  // X&& x2 = make_x();

  // C++14, 1 ctor and 2 copy ctor; C++17, 1 ctor, 1 copy ctor
  X x2 = make_x();
  x2.show();

  return 0;
}