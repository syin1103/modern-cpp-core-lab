#include <iostream>
#include <type_traits>

class Trivial {
 public:
  Trivial() {}
  Trivial(int n) : i(n), j(n) {}

 private:
  int i;
  int j;
};

int main() {
  Trivial a(5);
  Trivial b;
  b = a;
  std::cout << "std::is_trivial_v<Trivial> : "
            << std::is_trivial_v<Trivial> << std::endl;

  return 0;
}
