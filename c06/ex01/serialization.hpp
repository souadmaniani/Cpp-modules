#ifndef SERIALISATION_H
#define SERIALISATION_H
#include <iostream>

struct mystruct {
    int x;
    int y;
    char c;
    bool b;
};
  

// uintptr_t serialize(Data* ptr);
// Data* deserialize(uintptr_t raw);

#endif
