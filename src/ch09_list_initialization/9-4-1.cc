#include <iostream>

int main() {
  int x = 999;
  const int y = 999;
  const int z = 99;
  const double cdb = 99.9;
  double db = 99.9;

  char c1 = x;  // OK: traditional init allows implicit narrowing.
  // char c2{x}; // Error: possible implicit narrowing, rule 4.
  // char c3{y}; // Error: narrowing (999 out of char range), rule 4.
  char c4{z};               // OK: 99 fits in char, rule 4.
  unsigned char uc1 = {5};  // OK: 5 fits in unsigned char, rule 4.

  // Error: unsigned char cannot hold negative, rule 4
  // unsigned char uc2 = {-1};

  // Error: unsigned int cannot hold negative, rule 4.
  // unsigned int ui1 = {-1};

  // Error: signed int cannot hold the unsigned int value of -1
  // (usually 4294967295), rule 4
  // signed int si1 = {(unsigned int)-1};

  // int ii = {2.0};  // Error: int cannot hold floating-point value, rule 1.
  // float f1{x};     // Error: possible narrowing from int to float, rule 3.
  float f2{7};    // OK: 7 fits in float and converts back to 7, rule 3.
  float f3{cdb};  // OK: 99.9 fits in float, rule 2.
  // float f4{db};    // Error: possible narrowing from double to float, rule 2.

  return 0;
}