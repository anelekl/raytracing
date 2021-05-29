#pragma once
#include <iostream>

class point {
public:
  point(double x, double y, double z) {
      x_ = x;
      y_ = y;
      z_ = z;
  }

  point() {
    x_ = 0;
    y_ = 0;
    z_ = 0;
  }

  double x() const { return x_; }
  double y() const { return y_; }
  double z() const { return z_; }



private:
    double x_;
    double y_;
    double z_;

};

std::ostream& operator<<(std::ostream& os, const point& p) {
    os << "(" << p.x() << "," << p.y() << "," << p.z() << ")";
    return os;
}
