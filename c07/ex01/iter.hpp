#ifndef ITER_H
#define ITER_H
#include <iostream>
template <typename T>
void f(T i)
{
    std::cout << i << " ";
}

template <typename T>
void iter(T *arr, int len, void (*f)(T))
{
    int i = -1;
    while (++i < len)
        f(arr[i]);
    std::cout << "\n";
}

#endif
