#include <iostream>

template <class T, class U>
struct C {
  C(T, U) {}
};

template <class V>
using A = C<V*, V*>;

int main() {
  int i{};
  double d{};
  A a1(&i, &i);
  // A a2(i, i);    // error
  // A a3(&i, &d);  // error
  return 0;
}