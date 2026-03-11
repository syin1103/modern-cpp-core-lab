#include <type_traits>

class A {};

class B : public A {};

class C {};

template <class T>
class E {
  static_assert(std::is_base_of<A, T>::value, "T is not base of A");
};

int main(int argc, char* argv[]) {
  // static_assert(argc > 0, "argc > 0");  // error
  E<C> x;
  static_assert(sizeof(int) >= 4, "sizeof(int) >= 4");
  E<B> y;
}