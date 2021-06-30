// #include "convert.hpp"
#include <iostream>
#include <limits>


int main(int argc, char *argv[])
{
   if(argc == 2)
   {
      std::string str = argv[1];
      /************** handle int and char ******* */
      char *ptr = NULL;
      long integer = strtol(argv[1], &ptr, 10);
      if ((str.length() > 1 && integer == 0) ||
         (integer >  std::numeric_limits<int>::max() 
         || integer < std::numeric_limits<int>::min()))
      {
         std::cout << "char: impossible\n";
         std::cout << "int: impossible\n";
      }
      else
      {
         if (integer == 0 && str != "0")
         {
            std::cout << "char: " << "'" << str[0] << "'\n";
         }
         else if (isprint((int)integer))
         {
            char c = static_cast<char>(integer);
            std::cout << "char: " << "'" << c << "'\n";
         }
         else if (integer >= -128 && integer <= 127)
            std::cout << "char: Non displayable\n";
         else
             std::cout << "char: impossible\n";
         if (integer == 0 && str != "0")
         {
            integer = static_cast<int>(str[0]);
            std::cout << "int: " << integer << "\n";
         }
         else
            std::cout << "int: " << integer << "\n";
      }
      /**************************************************/
      /*************** handle float *********************/
      try
      {
         float f = std::stof(str);
         if (f == integer)
            std::cout << "float: " << f << ".0f" << "\n";
         else
            std::cout << "float: " << f << "f" << "\n";
      }
      catch(const std::exception& e)
      {
         (void)e;
         if (integer >= -128 && integer <= 127)
            std::cout << "float: " << integer << ".0f" << "\n";
         else
            std::cout << "float: impossible\n";
      }
      /**************************************************/
      /************** handle double *********************/
      try
      {
         double d = std::stod(str);
         if (d == integer)
            std::cout << "double: " << d << ".0" << "\n";
      else
         std::cout << "double: " << d << "\n";
      }
      catch(const std::exception& e)
      {
         (void)e;
         if (integer >= -128 && integer <= 127)
            std::cout << "double: " << integer << ".0" << "\n";
         else
            std::cout << "double: impossible\n";
      }
      /*************************************************/
   }
}
