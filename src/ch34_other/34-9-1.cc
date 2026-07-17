#include <iostream>

struct MyType {
  MyType() = default;
  MyType(MyType&) {};
};

template <typename T>
struct Wrapper {
  Wrapper() = default;
  Wrapper(const Wrapper&) = default;
  T t;
};

int main() {
  Wrapper<MyType> var1;
  // Wrapper<MyType> var2(var1); // error
  return 0;
}