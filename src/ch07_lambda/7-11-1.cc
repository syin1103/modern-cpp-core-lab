#include <iostream>
#include <map>

int main() {
  auto greater = [](auto x, auto y) { return x > y; };

  // C++20 allows construction and assignment of stateless lambda types, while
  // in C++17 this results in a compilation error: note: a lambda closure type
  // has a deleted copy assignment operator.
  std::map<std::string, int, decltype(greater)> mymap1, mymap2;
  mymap1 = mymap2;
  return 0;
}