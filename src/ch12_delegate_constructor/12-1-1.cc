#include <iostream>

class X {
 public:
  // redundant constructors (pre C++11)
  X() : a_(0), b_(0.) { CommonInit(); }
  X(int a) : a_(0), b_(0.) { CommonInit(); }
  X(double b) : a_(0), b_(b) { CommonInit(); }
  X(int a, double b) : a_(a), b_(b) { CommonInit(); }

 private:
  void CommonInit() {}
  int a_;
  double b_;
};

int main() {
  X x;
  return 0;
}