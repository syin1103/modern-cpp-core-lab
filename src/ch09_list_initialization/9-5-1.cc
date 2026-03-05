#include <iostream>

struct Point {
  int x;
  int y;
};

struct Point3D {
  // Point3D() {} // designated init not allowed for non-aggregates
  int x = 100;
  int y = 100;
  int z = 100;
};

int main() {
  Point p{.x = 4, .y = 2};
  Point3D p3d{.z = 3};

  return 0;
}