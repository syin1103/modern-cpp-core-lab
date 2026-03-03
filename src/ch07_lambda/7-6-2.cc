#include <future>
#include <iostream>

class Work {
 public:
  Work() : value(42) {}
  std::future<int> spawn() {
    // return std::async([=]() -> int { return value; });
    return std::async([=, tmp = *this]() -> int { return tmp.value; });
  }

 private:
  int value;
};

std::future<int> foo() {
  Work tmp;
  return tmp.spawn();
}

int main() {
  std::future<int> f = foo();
  f.wait();
  std::cout << "f.get() = " << f.get() << std::endl;
}