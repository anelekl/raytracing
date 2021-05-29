
#include <iostream>

#include "point.hpp"

class box {
public:
    box(double w, double l, double h) {
        e_0 = w / 2; // x coordinate
        e_1 = l / 2; // y coordinate
        e_2 = h / 2; // z coordinate
    };

    point C() const {
      return point(0,0, - e_2);
    }
    // Ausdehnung in x Richtung (e_0 * U_0)
    // point e_0() const {
    //   return point(width / 2,0,0);
    // }
    // Ausdehnung in y Richtung (e_1 * U_1)
    // point e_1() const {
    //   return point( 0, length / 2, 0);
    // }
    // Ausdehnung in z Richtung (e_2 * U_2)
    // point e_2() const {
    //   return point( 0, 0, height / 2);
    // }

private:
  double e_0;
  double e_1;
  double e_2;

};

int main() {
    box implant(1,2,3);

    std::cout << "Mittelpunkt: " << implant.C() << std::endl;
    // std::cout << "e_0 " << implant.e_0() << std::endl;
    // std::cout << "e_1 " << implant.e_1() << std::endl;
    // std::cout << "e_2 " << implant.e_2() << std::endl;

  return 1;
}
