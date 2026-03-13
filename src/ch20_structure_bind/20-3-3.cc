#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<int, std::string> id2str{
      {1, "hello"}, {3, "Structured"}, {5, "bindings"}};

  for (const auto& [id, str] : id2str) {
    std::cout << "id=" << id << ", str=" << str << std::endl;
  }

  return 0;
}