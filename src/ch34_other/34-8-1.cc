#include <iostream>

template <typename T>
void destroy(T* p) {
  p->~T();
}

int main() {
  int x = 10;
  destroy(&x);
  return 0;
}