#include <iostream>
#include <type_traits>

namespace v1 {
template <typename R, typename T1, typename T2>
R sum(T1 a1, T2 a2) {
  return a1 + a2;
}

template <typename T>
auto return_ref(T& t) {
  return t;
}

}  // namespace v1

namespace v2 {
template <typename T1, typename T2>
auto sum(T1 a1, T2 a2) -> decltype(a1 + a2) {
  return a1 + a2;
}

template <typename T>
auto return_ref(T& t) -> decltype(t) {
  return t;
}

}  // namespace v2

int main() {
  auto x1 = v1::sum<double>(5, 10.5);
  auto x2 = v2::sum(5, 10.5);

  int x3 = 0;
  static_assert(!std::is_reference_v<decltype(v1::return_ref(x3))>);
  static_assert(std::is_reference_v<decltype(v2::return_ref(x3))>);
  return 0;
}