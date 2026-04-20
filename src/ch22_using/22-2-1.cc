#include <map>
#include <string>

template <class T>
using int_map = std::map<int, T>;

template <class T>
struct X {
  int_map<T> int2other;
};

int main() {
  int_map<std::string> int2string;
  int2string[11] = "7";
  return 0;
}