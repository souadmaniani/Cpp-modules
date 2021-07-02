#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T k;

    k = a;
    a = b;
    b = k;
}

template <typename T>
T const & min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

template <typename T>
T const & max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

#endif
