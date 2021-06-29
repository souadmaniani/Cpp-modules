#ifndef SERIALISATION_H
#define SERIALISATION_H
#include <sstream>
#include <unistd.h>
#include <stdint.h>
#include <ctime>
#include <cstdlib>
#include <iostream>

typedef struct Data {
    int x;
    char c;
    std::string str;
}               Data;
  
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
