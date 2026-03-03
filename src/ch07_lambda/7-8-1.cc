#include <future>
#include <iostream>

class Work {
 public:
  Work() : value(42) {}
  std::future<int> spawn() {
    return std::async([=, *this]() -> int { return value; });
  }

 private:
  int value;
};

int main() { return 0; }