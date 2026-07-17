#include <iostream>

template <class... Args>
auto sum(Args... args) {
  return (args + ...);
}

template <class... Args>
void print(Args... args) {
  (std::cout << ... << args) << std::endl;
}

int main() {
  std::cout << sum(1, 5.0, 11.7) << std::endl;

  print(std::string("hello "), "c++ ", "world");
  return 0;
}