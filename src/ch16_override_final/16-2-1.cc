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
  virtual void sone_func() {}
  virtual void foo(int& x) {}
  virtual void bar() {}
  virtual void baz() {}
};

int main() { return 0; }