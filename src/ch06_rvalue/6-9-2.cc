#include <iostream>
#include <string>

template <typename T>
void show_type(T t) {
  std::cout << typeid(t).name() << std::endl;
}

template <typename T>
void perfect_forwarding(T&& t) {
  // show_type(static_cast<T&&>(t));
  show_type(std::forward<T>(t));
}

std::string get_string() { return "hi world"; }

int main() {
  std::string s = "hello world";
  perfect_forwarding(s);
  perfect_forwarding(get_string());

  return 0;
}