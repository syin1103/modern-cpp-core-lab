#include <iostream>
#include <vector>

void print(const std::vector<int>& vec) {
  for (const auto& value : vec) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> x1(5, 5);
  std::vector<int> x2{5, 5};

  print(x1);
  print(x2);

  return 0;
}