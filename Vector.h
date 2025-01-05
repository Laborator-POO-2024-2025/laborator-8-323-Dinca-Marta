#ifndef VECTOR_H
#define VECTOR_H

#include <algorithm>
#include <iostream>

template <class x>
class Vector {
    int dim;
    x* buf;

public:
    Vector(int d);
    ~Vector();
    x& operator[](int index);
    void sortare();
    void display() const;
};

#include "Vector.cpp" // Include implementarea template-ului
#endif

