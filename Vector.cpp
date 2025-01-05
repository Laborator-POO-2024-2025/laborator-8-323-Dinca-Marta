#ifndef VECTOR_CPP
#define VECTOR_CPP

#include "Vector.h"

template <class x>
Vector<x>::Vector(int d) : dim(d), buf(new x[d]) {}

template <class x>
Vector<x>::~Vector() {
    delete[] buf;
}

template <class x>
x& Vector<x>::operator[](int index) {
    return buf[index];
}

template <class x>
void Vector<x>::sortare() {
    std::sort(buf, buf + dim);
}

template <class x>
void Vector<x>::display() const {
    for (int i = 0; i < dim; i++) {
        std::cout << buf[i] << " ";
    }
    std::cout << std::endl;
}

#endif
