#include "Fractie.h"

Fractie::Fractie(int num, int denom) : numarator(num), numitor(denom) {
    if (numitor == 0) throw std::invalid_argument("Numitorul nu poate fi 0!");
}

double Fractie::valoare() const {
    return static_cast<double>(numarator) / numitor;
}

void Fractie::display() const {
    std::cout << numarator << "/" << numitor << " ";
}

bool Fractie::operator<(const Fractie& other) const {
    return valoare() < other.valoare();
}
