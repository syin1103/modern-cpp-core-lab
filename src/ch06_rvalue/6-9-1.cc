#include <iostream>
#include <string>

template <typename T>
void show_type(T t) {
  std::cout << typeid(t).name() << std::endl;
}

template <typename T>
void normal_forwarding(T t) {
  show_type(t);
}

// template <typename T>
// void normal_forwarding(T& t) {
//   show_type(t);
// }

// template <typename T>
// void normal_forwarding(const T& t) {
//   show_type(t);
// }

std::string get_string() { return "hi world"; }

int main() {
  std::string s = "hello world";
  normal_forwarding(s);

  normal_forwarding(get_string());

  return 0;
}