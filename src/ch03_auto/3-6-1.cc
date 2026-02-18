#include <iostream>

// C++17: auto as placeholder for non-type template parameters
template <auto N>
void f() {
  std::cout << N << std::endl;
}

int main() {
  f<5>();    // N is int
  f<'c'>();  // N is char
  // f<5.0>();  // error, template argument cannot be double
  return 0;
}