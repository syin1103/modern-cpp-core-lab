#include <cassert>
#include <iostream>

struct X {
  const int n;
};

union U {
  X x;
  float f;
};

int main() {
  U u = {{1}};
  X* p = new (&u.x) X{2};

  assert(*std::launder(&u.x.n));

  return 0;
}