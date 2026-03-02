#include <iostream>
#include <vector>

template <typename T>
void bar(T&& t) {}

int get_value() { return 5; }

template <typename T>
void foo(std::vector<T>&& t) {}

int main() {
  int i = 42;
  const int j = 11;
  bar(i);
  bar(j);
  bar(get_value());

  auto&& x = i;
  auto&& y = j;
  auto&& z = get_value();

  std::vector<int> v{1, 2, 3};
  // foo(v); // error
  return 0;
}