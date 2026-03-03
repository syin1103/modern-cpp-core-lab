#include <iostream>
#include <string>

int main() {
  {
    int x = 5;
    auto foo = [x = x + 1] { return x; };
  }

  std::string x = "hello C++";
  auto foo = [x = std::move(x)] { return x + "world"; };
}