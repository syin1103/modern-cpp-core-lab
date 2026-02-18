#include <iostream>

class Base {
 public:
  virtual void f() { std::cout << "Base::f()" << std::endl; }
};

class Derived : public Base {
 public:
  virtual void f() override { std::cout << "Derived::f()" << std::endl; }
};

int main() {
  Base* d = new Derived();
  auto b = *d;
  b.f();  // Base:f()

  auto& c = *d;
  c.f();  // Derived::f()

  delete d;
  return 0;
}