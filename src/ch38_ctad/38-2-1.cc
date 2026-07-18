#include <iostream>
#include <tuple>
#include <vector>

int main() {
  std::vector v1{1, 3, 5};
  std::vector v2{v1};

  std::tuple t1{5, 6.8, "hello"};
  std::tuple t2{t1};

  return 0;
}