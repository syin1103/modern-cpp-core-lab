#include <iostream>

int main() {
  int a = 0;
  typeof(a) b = 5;

  int x1 = 0;
  double x2 = 5.5;
  std::cout << typeid(x1).name() << std::endl;
  std::cout << typeid(x1 + x2).name() << std::endl;
  std::cout << typeid(int).name() << std::endl;

  // auto t1 = typeid(int);  // fails: copy ctor not available
  auto& t2 = typeid(int);  // OK, t2 is const std::type_info&
  auto t3 = &typeid(int);  // OK, t3 is const std::type_info*

  return 0;
}