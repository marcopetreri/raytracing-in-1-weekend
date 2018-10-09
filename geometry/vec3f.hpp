#ifndef VEC3F
#define VEC3F

#include <iostream>

class Vec3f {
 public:
  Vec3f() {}
  Vec3f(float _x) {
    e[0] = _x;
    e[1] = _x;
    e[2] = _x;
  }
  Vec3f(float _x, float _y, float _z) {
    e[0] = _x;
    e[1] = _y;
    e[2] = _z;
  }

  inline float x() const { return e[0]; }
  inline float y() const { return e[1]; }
  inline float z() const { return e[2]; }

  float e[3];
};

inline std::ostream &operator<<(std::ostream &os, const Vec3f &v) {
  os << "v3f:   " << v.e[0] << "   " << v.e[1] << "   " << v.e[2];
  return os;
}

#endif