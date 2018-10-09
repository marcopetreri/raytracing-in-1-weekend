
#include <fstream>
#include <iostream>
#include "geometry/vec3f.hpp"

int main(int argc, char const *argv[]) {
  std::ofstream file;
  file.open("prova.ppm");
  // if (!file)
  //   exit(0);

  int x = 500, y = 500;
  int unit = 255;

  file << "P3\n" << y << " " << x << "\n" << unit << "\n";

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      file << 255 * j / y << " " << 0 << " " << 255 * i / x << "\n";
    }
  }

  file.close();

  Vec3f v(3);

  std::cout << v;

  return 0;
}
