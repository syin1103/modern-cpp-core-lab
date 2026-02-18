#include <functional>
#include <iostream>
#include <map>

int sum(int a1, int a2) { return a1 + a2; }

int main() {
  std::map<std::string, int> str2int{{"123", 123}, {"234", 234}};
  for (std::map<std::string, int>::const_iterator it = str2int.cbegin();
       it != str2int.cend(); ++it) {
    std::cout << (*it).first << ", " << (*it).second << std::endl;
  }

  for (std::pair<const std::string, int>& it : str2int) {
    std::cout << it.first << ", " << it.second << std::endl;
  }

  for (auto& it : str2int) {
    std::cout << it.first << ", " << it.second << std::endl;
  }

  auto l = [](int a1, int a2) { return a1 + a2; };
  auto b = std::bind(sum, 5, std::placeholders::_1);
  std::cout << "l: " << l(5, 1) << std::endl;
  std::cout << "b: " << b(1) << std::endl;

  return 0;
}