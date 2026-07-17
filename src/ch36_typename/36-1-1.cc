#include <iostream>

template <typename T>
using A = int;

template <template <typename> typename T>
struct B {};

int main() {
  B<A> ba;
  return 0;
}