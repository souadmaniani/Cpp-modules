#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>

struct Test {
    void swap(T *a, T *b);
    T min(T a, T b);
    T max(T a, T b);
};

#endif