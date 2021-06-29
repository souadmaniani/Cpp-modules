#include "convert.hpp"
#include <iostream>
#include <limits>

//             << "int_max: "    << std::numeric_limits<int>::max() << "\n"
//             << "int_min: "    << std::numeric_limits<int>::min() << "\n"
//             << "float_max: "  << std::numeric_limits<float>::max() << "\n"
//             << "float_min: "  << std::numeric_limits<float>::min() << "\n"
//             << "double_max: " << std::numeric_limits<double>::max() << "\n"
//             << "double_min: " << std::numeric_limits<double>::min() << "\n";
// stoi
int main(int argc, char *argv[])
{
   if(argc == 2)
   {
      std::string str = argv[1];
      //handle int
      char *endptr = NULL;
      long integer = strtol(argv[1], &endptr, 10);
      std::cout << integer << " " << "|"<<endptr <<"|" << "\n";
      if (argv[1] == endptr)
         std::cout << "impossible\n";
      else{
         int a = std::atoi(str.c_str());
         std::cout << "int: " << a << "\n";
      }
   }
}
