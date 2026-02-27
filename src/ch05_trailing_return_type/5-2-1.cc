#include <iostream>

class IntWrap {
 public:
  IntWrap(int n) : n_(n) {}
  IntWrap operator+(const IntWrap& other) { return IntWrap(n_ + other.n_); }

 private:
  int n_;

  friend std::ostream& operator<<(std::ostream& os, const IntWrap& obj);
};

std::ostream& operator<<(std::ostream& os, const IntWrap& obj) {
  os << obj.n_;
  return os;
}

template <typename T1, typename T2>
auto sum1(T1 t1, T2 t2) -> decltype(t1 + t2) {
  return t1 + t2;
}

// C++11, requires that default constructors for T1 and T2 exist.
template <typename T1, typename T2>
decltype(T1() + T2()) sum2(T1 t1, T2 t2) {
  return t1 + t2;
}

template <typename T1, typename T2>
decltype(*static_cast<T1*>(nullptr) + *static_cast<T2*>(nullptr)) sum3(T1 t1,
                                                                       T2 t2) {
  return t1 + t2;
}

template <typename T1, typename T2>
decltype(std::declval<T1>() + std::declval<T2>()) sum4(T1 t1, T2 t2) {
  return t1 + t2;
}

int main() {
  auto x1 = sum1(4, 2);
  auto x2 = sum2(4, 2);

  // sum2(IntWrap(1), IntWrap(2)); // error, IntWrap has no default constructor

  auto x3 = sum3(IntWrap(1), IntWrap(2));
  auto x4 = sum4(IntWrap(1), IntWrap(2));

  std::cout << "x1: " << x1 << std::endl;
  std::cout << "x2: " << x2 << std::endl;
  std::cout << "x3: " << x3 << std::endl;
  std::cout << "x4: " << x4 << std::endl;
  return 0;
}