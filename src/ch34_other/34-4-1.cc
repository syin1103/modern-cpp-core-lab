#include <iostream>

struct C {
  int i;
  friend bool operator==(C, C) = default;
};

int main() { return 0; }