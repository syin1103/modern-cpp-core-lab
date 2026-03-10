#include <iostream>
#include <string>

class MyStringWithIndex : public std::string {
 public:
  int index_ = 0;
};

std::ostream& operator<<(std::ostream& o, const MyStringWithIndex& s) {
  o << s.index_ << ": " << s.c_str();
  return o;
}

int main() {
  MyStringWithIndex s{{"Hello World"}, 11};

  std::cout << s << std::endl;
  std::cout << "std::is_aggregate_v<std::MyStringWithIndex> = "
            << std::is_aggregate_v<MyStringWithIndex> << std::endl;
  return 0;
}