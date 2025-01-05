#include <iostream>
#include <complex>
#include "Fractie.h"
#include "Vector.h"

int main() {
    // Vector of int
    Vector<int> vInt(5);
    vInt[0] = 5; vInt[1] = 3; vInt[2] = 1; vInt[3] = 4; vInt[4] = 2;
    vInt.sortare();
    vInt.display();

    // Vector of double
    Vector<double> vDouble(5);
    vDouble[0] = 5.5; vDouble[1] = 3.3; vDouble[2] = 1.1; vDouble[3] = 4.4; vDouble[4] = 2.2;
    vDouble.sortare();
    vDouble.display();

    // Vector of std::complex
    Vector<std::complex<double>> vComplex(3);
    vComplex[0] = { 1.0, 2.0 };
    vComplex[1] = { 3.0, 1.0 };
    vComplex[2] = { 0.5, 1.5 };
    vComplex.display(); // No sorting applied for std::complex

    // Vector of Fractie
    Vector<Fractie> vFractie(3);
    vFractie[0] = Fractie(1, 2);
    vFractie[1] = Fractie(3, 4);
    vFractie[2] = Fractie(1, 3);
    vFractie.sortare();
    for (int i = 0; i < 3; i++) {
        vFractie[i].display();
    }
    std::cout << std::endl;

    return 0;
}
