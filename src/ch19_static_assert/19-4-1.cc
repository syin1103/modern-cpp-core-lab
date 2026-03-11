#include <type_traits>

class A {};

class B : public A {};

class C {};

template <class T>
class E {
  static_assert(std::is_base_of<A, T>::value);
};

int main(int argc, char* argv[]) {
  E<C> x;
  static_assert(sizeof(int) < 4);
}