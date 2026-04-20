#include <map>
#include <string>

template <class T>
struct int_map {
  typedef std::map<int, T> type;
};

template <class T>
struct X {
  typename int_map<T>::type int2other;
};

int main() {
  int_map<std::string>::type int2string;
  int2string[11] = "7";
  return 0;
}