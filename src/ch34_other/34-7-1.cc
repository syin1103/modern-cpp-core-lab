#include <iostream>

struct X {
  X() {}
  ~X() { std::cout << "X dtor..." << std::endl; }
  void* operator new(size_t s) { return ::operator new(s); }
  void operator delete(X* ptr, std::destroying_delete_t) {
    std::cout << "call delete" << std::endl;
    ptr->~X();
    ::operator delete(ptr);
  }
};

int main() {
  X* ptr = new X();
  delete ptr;
  return 0;
}