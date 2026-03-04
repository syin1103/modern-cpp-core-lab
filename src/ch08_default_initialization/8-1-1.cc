#include <iostream>
#include <string>

class X {
 public:
  X() {}
  X(int a) : a_(a) {}
  X(double b) : b_(b) {}
  X(const std::string& c) : c_(c) {}

 private:
  int a_ = 0;
  double b_{0.};
  std::string c_{"hello world"};
};

struct Y {
  // int a(5);    // error: cannot use () for default member initialization
  // auto b = 8;  // error: auto not allowed for non-static data member
};

int main() { return 0; }