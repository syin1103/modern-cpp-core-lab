#include <iostream>

struct sometype {
  // Non-static data member declarations cannot use placeholder types, auto,
  // decltype(auto), etc.
  // auto i = 5;

  // C++11: static const auto member variables are allowed
  static const auto i = 5;

  // C++17: static auto without const requires inline.
  static inline auto j = 5;
};

// C++20, abbreviated function template.
void echo(auto str) {
  std::cout << "echo: " << str << std::endl;  // fails before C++20, OK in C++20
}

int main() {
  {
    int n = 5;
    auto *pn = &n, m = 10;  // auto is deduced as int
    // auto *pn = &n, m = 10.0;  // error: inconsistent declaration types
  }

  {
    auto i = true ? 5 : 8.0;  // the data type of i is double.
  }

  sometype type;
  std::cout << type.i << ", " << type.j << std::endl;

  echo("Hello World");
  echo(50);

  {
    // auto can be used with new, but it's not common.
    auto i = new auto(5);
    auto* j = new auto(5);
  }

  return 0;
}