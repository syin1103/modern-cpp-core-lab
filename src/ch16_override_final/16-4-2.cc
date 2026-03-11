#include <iostream>

class Base final {
 public:
  virtual void foo(int x) {}
};

// error
// class Derived : public Base {
//  public:
//   void foo(int x) {};
// };

int main() { return 0; }