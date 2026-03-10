#include <iostream>
#include <string>

class BaseData {
 public:
  int Get() { return data_; }

 protected:
  BaseData() : data_(11) {}

 private:
  int data_;
};

class DerivedData : public BaseData {};

int main() {
  // ok before C++17, fails after.
  // DerivedData d{};
  // std::cout << d.Get() << std::endl;
  return 0;
}