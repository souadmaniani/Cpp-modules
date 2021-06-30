#include "serialization.hpp"

int main()
{
    uintptr_t	raw;
    Data		*ptr;
    Data		*result;
    int i = -1;

    while (++i < 3)
    {
        std::cout << "*********************\n";
		ptr = fill_data();
        raw = serialize(ptr);
        result = deserialize(raw);
		// std::cout << ptr << "|" << result << "\n";
        // std::cout << "--------------------\n";
        std::cout << "str: " << result->str << "\n";
        std::cout << "x: " << result->x << "\n";
        std::cout << "c: " << result->c << "\n";
        std::cout << "*********************\n\n";
        delete result;
    }
    return 0;
}
