#include <iostream>

template <class T>
struct widget {
  widget() { std::cout << "template" << std::endl; }
};

template <>
struct widget<nullptr_t> {
  widget() { std::cout << "nullptr" << std::endl; }
};

template <class T>
widget<T>* make_widget(T) {
  return new widget<T>();
}

int main() {
  auto w1 = make_widget(0);
  auto w2 = make_widget(nullptr);
  return 0;
}