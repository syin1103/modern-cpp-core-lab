#include <iostream>
#include <string>

struct C {
  C(std::string a, int b) {}
  C(int a) {}
};

void foo(C) {}
C bar() { return {"world", 5}; }

int main() {
  int x = {5};              // copy initialization
  int x1{8};                // direct initialization
  C x2 = {4};               // copy initialization
  C x3{2};                  // direct initialization
  foo({8});                 // copy initialization
  foo({"hello", 8});        // copy initialization
  C x4 = bar();             // copy initialization
  C* x5 = new C{"hi", 42};  // direct initialization
}