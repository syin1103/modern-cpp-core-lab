#include <iostream>

namespace v1 {
template <typename T>
T copy(const T& o) noexcept(std::is_fundamental<T>::value) {
  return {};
}
}  // namespace v1

namespace v2 {
template <typename T>
T copy(const T& o) noexcept(noexcept(T(o))) {
  return {};
}
}  // namespace v2

int main() { return 0; }