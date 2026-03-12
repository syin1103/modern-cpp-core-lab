#include <iostream>
#include <string>
#include <tuple>
#include <vector>

auto return_multiple_values() { return std::make_tuple(11, 7); }

struct BindTest {
  int a = 42;
  std::string b = "hello structured binding";
};

int main() {
  {
    auto [x, y] = return_multiple_values();
    std::cout << "x=" << x << ", y=" << y << std::endl;
  }

  {
    BindTest bt;
    auto [x, y] = bt;
    std::cout << "x=" << x << ", y=" << y << std::endl;
  }

  {
    std::vector<BindTest> bt{{11, "hello"}, {7, "c++"}, {42, "world"}};
    for (const auto& [x, y] : bt) {
      std::cout << "x=" << x << ", y=" << y << std::endl;
    }
  }

  return 0;
}