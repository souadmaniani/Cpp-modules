#include "serialization.hpp"

Data *fill_data(void)
{
    Data* ptr = new Data;

    std::string alphanum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < 8; i++)
    {
        usleep(1);
        ptr->str += alphanum[(unsigned long)clock() % alphanum.length()];
    }
    ptr->x = clock() % 2147483647;
    ptr->c = alphanum[(unsigned long)clock() % alphanum.length()];
    return (ptr);
}

uintptr_t serialize(Data* ptr)
{
    return  (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
