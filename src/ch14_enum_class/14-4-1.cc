#include <iostream>

enum class Color { Red, Green, Blue };

const char* ColorToString(Color c) {
  switch (c) {
    using enum Color;
    case Red:
      return "Red";
    case Green:
      return "Green";
    case Blue:
      return "Blue";
    default:
      return "None";
  }
}

int main() {
  std::cout << ColorToString(Color::Blue) << std::endl;
  return 0;
}