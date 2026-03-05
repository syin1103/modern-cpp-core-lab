#include <iostream>

struct type {
  void* operator new(std::size_t) = delete;
};

type global_var;

int main() {
  static type static_var;
  type auto_var;
  // type* var_ptr = new type; // new operator for this class is deleted

  return 0;
}