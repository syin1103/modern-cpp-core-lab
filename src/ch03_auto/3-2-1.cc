#include <iostream>

int sum(int a1, int a2) { return a1 + a2; }

int main() {
  {
    const int i = 5;
    auto j = i;    // auto is deduced as int, not const int
    auto& m = i;   // auto is deduced as const int, m is deduced as const int&
    auto* k = &i;  // auto is deduced as const int, k is deduced as const int*
    const auto n = j;  // auto is deduced as int, n is deduced as const int
  }

  {
    int i = 5;
    int& j = i;
    auto m = j;  // auto is deduced as int, not int&
  }

  {
    int i = 5;
    auto&& m = i;  // auto is deduced as int&
    auto&& j = 5;  // auto is deduced as int
  }

  {
    int i[5];
    auto m = i;    // auto is deduced as int*
    auto j = sum;  // auto is deduced as int(*)(int ,int)
  }

  {
    auto x1 = {1, 2};  // x1 is std::initializer_list<int>
    // auto x2 = {1, 2.0};  // error, different element types in braces

    // auto x3{1, 2};  // error, not a single element
    auto x4 = {3};  // x4 is std::initializer_list<int>
    auto x5{3};     // x5 is int
  }

  return 0;
}
