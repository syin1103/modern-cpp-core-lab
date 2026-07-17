#include <ctime>
#include <iostream>

class X {
 public:
  X() { std::cout << "X ctor..." << std::endl; }
  X(const X& x) { std::cout << "X copy ctor..." << std::endl; }
  ~X() { std::cout << "X dtor..." << std::endl; }
};

X make_x1() {
  X x1;
  return x1;
}

X make_x2() { return X(); }

X make_x3() {
  X x1, x2;
  if (std::time(nullptr) % 50 == 0) {
    return x1;
  } else {
    return x2;
  }
}

int main() {
  {
    X x1 = make_x1();
  }

  std::cout << " ----------- " << std::endl;

  {
    X x2 = make_x2();
  }

  std::cout << " ----------- " << std::endl;

  {
    X x3 = make_x3();
  }

  return 0;
}