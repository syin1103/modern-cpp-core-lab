#include <deque>
#include <list>
#include <vector>

class X {
 public:
  X(std::vector<short>&);
  X(std::deque<int>&);

 private:
  template <typename T>
  X(T first, T last) : l_(first, last) {}

  std::list<int> l_;
};

X::X(std::vector<short>& v) : X(v.begin(), v.end()) {}
X::X(std::deque<int>& v) : X(v.begin(), v.end()) {}

int main() {
  std::vector<short> a{1, 2, 3, 4, 5};
  std::deque<int> b{1, 2, 3, 4, 5};
  X x1(a);
  X x2(b);

  return 0;
}