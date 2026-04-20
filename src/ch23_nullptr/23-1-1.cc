#include <iostream>

void f(int) { std::cout << "int" << std::endl; }
void f(char*) { std::cout << "char" << std::endl; }

int main() {
  // f(NULL);  // error in gcc: error: call of overloaded ‘f(NULL)’ is ambiguous
  f(reinterpret_cast<char*>(NULL));
  return 0;
}