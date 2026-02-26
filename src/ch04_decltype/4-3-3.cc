#include <iostream>

int i;
int* j;
int n[10];

int main() {
  // decltype(i = 0);                  // deduces to int&
  // decltype(0, i);                   // deduces to int&
  // decltype(i, 0);                   // deduces to int
  // decltype(n[5]);                   // deduces to int&
  // decltype(*j);                     // deduces to int&
  // decltype(static_cast<int&&>(i));  // deduces to int&&
  // decltype(i++);                    // deduces to int
  // decltype(++i);                    // deduces to int&
  // decltype("hello world");          // deduces to const char(&)[12]
  return 0;
}