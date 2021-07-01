#include "whatever.hpp"

template <typename T>
void Test<T>::swap(T *a, T *b)
{
    T k;

    k = *a;
    *a = *b;
    *b = k;
}
template <typename T>
T Test<T>::min(T a, T b)
{
    return (a < b ? a : b);
}
template <typename T>
T Test<T>::max(T a, T b)
{
    return (a > b ? a : b);
}
