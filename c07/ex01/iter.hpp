#ifndef ITER_H
#define ITER_H
#include <iostream>
template <typename T>
void f(T const & i)
{
    std::cout << i << "\n";
}

template <typename T>
void iter(T *arr, int len, void (*f)(T const &))
{
    int i = -1;
    while (++i < len)
        f(arr[i]);
}

#endif
