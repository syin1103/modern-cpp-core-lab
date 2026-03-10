#include <iostream>

enum School { principal, teacher, student };

enum Company { chairman, manager, employee };

int main() {
  School x = student;
  Company y = manager;
  bool b = student >= manager;  // comparison between different enum types
  b = x < employee;
  int y = student;  // implicitly converted to int

  // School x = chairman;  // type mismatch, error
  // Company y = student;  // type mismatch, error
  // x = 1;                // int cannot be implicitly converted to enum type
}