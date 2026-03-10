#include <iostream>
#include <string>
#include <vector>

class NonCopyable {
 protected:
  NonCopyable() = default;
  ~NonCopyable() = default;
  NonCopyable(const NonCopyable&) = delete;
  NonCopyable& operator=(const NonCopyable&) = delete;
};

struct X : NonCopyable {
  std::string s;
  std::vector<int> v;
};

int main() {
  X x;
  return 0;
}