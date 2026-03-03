#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> x = {1, 2, 3, 4, 5};
  std::cout << *std::find_if(x.cbegin(), x.cend(),
                             [](int i) { return (i % 3) == 0; });
  std::cout << std::endl;

  return 0;
}