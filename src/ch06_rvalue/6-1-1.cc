#include <iostream>

int x = 1;

int get_val() { return x; }

void set_val(int val) { x = val; }

int main() {
  x++;  // rvalue
  ++x;  // lvalue
  int y = get_val();
  set_val(6);

  auto p = &"hello world";

  return 0;
}