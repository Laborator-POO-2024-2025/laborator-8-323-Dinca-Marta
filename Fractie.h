#ifndef FRACTIE_H
#define FRACTIE_H

#include <iostream>
#include <stdexcept>

class Fractie {
    int numarator, numitor;

public:
    Fractie(int num = 0, int denom = 1);
    double valoare() const;
    void display() const;
    bool operator<(const Fractie& other) const;
};

#endif

