#include <iostream>

constexpr int abs(int x) {
  if (x > 0) {
    return x;
  } else {
    return -x;
  }
}

constexpr int sum(int x) {
  int result = 0;
  while (x > 0) {
    result += x--;
  }
  return result;
}

constexpr int next(int x) { return ++x; }

class X {
 public:
  constexpr X() : x1(5) {}
  constexpr X(int i) : x1(0) {
    if (i > 0) {
      x1 = 5;
    } else {
      x1 = 8;
    }
  }

  constexpr void set(int i) { x1 = i; }
  constexpr int get() const { return x1; }

 private:
  int x1;
};

constexpr X make_x() {
  X x;
  x.set(42);
  return x;
}

int main() {
  char buffer1[sum(5)] = {0};
  char buffer2[abs(-5)] = {0};
  char buffer[next(5)] = {0};

  constexpr X x1(-1);
  constexpr X x2 = make_x();
  constexpr int a1 = x1.get();
  constexpr int a2 = x2.get();

  std::cout << a1 << std::endl;
  std::cout << a2 << std::endl;

  return 0;
}