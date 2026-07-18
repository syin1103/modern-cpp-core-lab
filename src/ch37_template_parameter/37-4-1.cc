#include <iostream>

int h = 0;
void g() {}

namespace N {

struct A {};

template <class T>
int f(T) {
  return 1;
}

template <class T>
int g(T) {
  return 2;
}

template <class T>
int h(T) {
  return 3;
}

}  // namespace N

int main() {
  int x = f<N::A>(N::A());
  int y = g<N::A>(N::A());
  // int z = h<N::A>(N::A());  // error

  return 0;
}
