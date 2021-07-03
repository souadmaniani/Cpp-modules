#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4};
    iter(arr, 4, f);

    float arr1[] = {1.2, 2.5, 3.5, 4.6};
    iter(arr1, 4, f);

    char arr2[] = {'a', 'b', 'c', 'd'};
    iter(arr2, 4, f);

    std::string arr3[] = {"souad", "oussama", "fatima zahraa", "joroh"};
    iter(arr3, 4, f);
}
