#include "serialization.hpp"

#include <sstream>
#include <unistd.h>

int * serialize( void )
{
    mystruct s;
  
    s.x = 5;
    s.y = 10;
    s.c = 'a';
    s.b = true;


    int* p = reinterpret_cast<int*>(&s);
    // std::cout << sizeof(s) << std::endl;
    std::cout << *p << std::endl;
    p++;
    std::cout << *p << std::endl;
    p++;
    char* ch = reinterpret_cast<char*>(p);
    std::cout << *ch << std::endl;
    ch++;
    bool* n = reinterpret_cast<bool*>(ch);
    std::cout << *n << std::endl;
    // std::cout << *(reinterpret_cast<bool*>(ch));
    return p;
}

// void deserialize( void * raw )
// {
//     int* c = reinterpret_cast<int*>(raw);
//     std::cout << *c << std::endl;
// }

int     main(void)
{
    int* serialized = serialize();
    // deserialize(serialized);

    return 0;
}
// int main()
// {
//     // uintptr_t  raw;   
//     // raw = serialize(Data* ptr);
//     // Data* deserialize(raw);
//     return 0;
// }