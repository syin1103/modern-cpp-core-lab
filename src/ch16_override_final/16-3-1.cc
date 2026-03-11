#include <iostream>

class Base {
 public:
  virtual void some_func() {}
  virtual void foo(int x) {}
  virtual void bar() const {}
  void baz() {}
};

class Derived : public Base {
 public:
  // virtual void sone_func() override {}  // error
  // virtual void foo(int& x) override {}  // error
  // virtual void bar() override {}        // error
  // virtual void baz() override {}        // error
};

int main() { return 0; }