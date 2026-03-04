#include <iostream>
#include <vector>

int main() {
  auto f = []<typename T>(const T& x) {
    T copy = x;
    using Iterator = typename T::iterator;
  };

  std::vector<int> v;
  f(v);

  return 0;
}