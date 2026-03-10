#include <iostream>

enum class HighSchool { student, teacher, principal };

enum class University { student, professor, principal };

int main() {
  HighSchool x = HighSchool::student;
  University y = University::student;
  bool b = x < HighSchool::teacher;
  std::cout << std::boolalpha << b << std::endl;
  return 0;
}