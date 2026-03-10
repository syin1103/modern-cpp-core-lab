#include <iostream>

enum class Color { Red, Green, Blue };

enum class Color1 : char {};
enum class Color2 : short {};
enum Color3 {};

int main() {
  Color c{5};
  // Color c1 = 5;  // error
  // Color c2 = {5}; // error
  // Color c3(5);// error

  {
    Color1 c{7};
    Color2 c1{11};
    Color2 c2 = Color2{5};
  }

  // Color3 c{7};  // error

  // Color1 c{7.11}; // error

  return 0;
}