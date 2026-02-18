#include <iostream>

// C++14 supports auto return type deduction.
auto sum(long a1, long a2) {
  if (a1 < 0) {
    return 0;  // return int
  } else {
    // return a1 + a2;                    // error, return long
    return static_cast<int>(a1 + a2);
  }
}

int main() {
  std::cout << "auto sum: " << sum(-10, 20) << std::endl;
  return 0;
}