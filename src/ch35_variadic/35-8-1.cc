#include <iostream>

template <class... Args>
auto delay_invok_foo(Args... args) {
  return
      [... args = std::move(args)]() -> decltype(auto) { return foo(args...); };
}

int main() { return 0; }