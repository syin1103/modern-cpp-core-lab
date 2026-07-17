#include <iostream>

void f(int (&)[]) { std::cout << "call f(int(&)[])..." << std::endl; }

void f(int (&)[1]) { std::cout << "call f(int(&)[1])..." << std::endl; }

int arr[1];

int main() {
  int (&r)[] = arr;
  f(arr);
  return 0;
}