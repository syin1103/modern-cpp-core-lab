#include <iostream>

template <typename T>
decltype(auto) return_ref(T& t) {
  return t;
}

int main() {
  int x1 = 0;
  static_assert(std::is_reference_v<decltype(return_ref(x1))>);
  return 0;
}