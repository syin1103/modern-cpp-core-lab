#include <iostream>

class Base {
 public:
  virtual void foo(int x) {}
};

class Derived : public Base {
 public:
  void foo(int x) final {};
};

class Derived2 : public Derived {
 public:
  // void foo(int x) {}; // error
};

int main() { return 0; }