#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
template <typename T>
void easyfind(T x, int y)
{
    typename T::iterator location;
    location = std::find(x.begin(), x.end(), y);
    if (location == x.end())
    {
        std::string str1 = std::to_string(y);
        std::string str2(" not found\n");
        throw str1.append(str2);
    }
    std::cout << "Found "<< y << "\n\n";
}
#endif