#include <iostream>

template <class... Args>
void foo(Args... args) {}

template <class... Args>
class bar {
 public:
  bar(Args... args) {
    auto lm = [args...] { foo(&args...); };
  }
};

int main() {
  bar<int, double> b2(5, 8.11);
  return 0;
}