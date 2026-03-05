#include <iostream>

class NonTrivial {
 public:
  NonTrivial(int n) : i(n), j(n) {}
  NonTrivial() {}

 private:
  int i;
  int j;
};

class Trivial {
 public:
  Trivial(int n) : i(n), j(n) {}
  Trivial() = default;

 private:
  int i;
  int j;
};

class NonCopyable {
 public:
  NonCopyable() = default;
  NonCopyable(const NonCopyable&) = delete;
  NonCopyable& operator=(const NonCopyable&) = delete;
};

int main() {
  Trivial a(5);
  Trivial b;
  b = a;

  std::cout << "std::is_trivial_v<Trivial> : "
            << std::is_trivial_v<Trivial> << std::endl;

  std::cout << "std::is_trivial_v<NonTrivial> : "
            << std::is_trivial_v<NonTrivial> << std::endl;

  NonCopyable c, d;
  // c = d; // error, copy assignment operator is deleted
  return 0;
}