#include <iostream>

int main() {
  std::cout << std::alignment_of<int>::value << std::endl;
  std::cout << std::alignment_of<int>() << std::endl;
  std::cout << std::alignment_of<double>::value << std::endl;
  std::cout << std::alignment_of<double>() << std::endl;

  std::aligned_storage<128, 16>::type buffer;
  std::cout << sizeof(buffer) << std::endl;
  std::cout << alignof(buffer) << std::endl;

  std::aligned_union<64, double, int, char>::type buffer2;
  std::cout << sizeof(buffer2) << std::endl;
  std::cout << alignof(buffer2) << std::endl;

  return 0;
}