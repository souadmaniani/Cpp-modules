#include "convert.hpp"
#include <iostream>
#include <limits>

// std::cout   << "int_max: "    << std::numeric_limits<int>::max() << "\n"
//             << "int_min: "    << std::numeric_limits<int>::min() << "\n"
//             << "float_max: "  << std::numeric_limits<float>::max() << "\n"
//             << "float_min: "  << std::numeric_limits<float>::min() << "\n"
//             << "double_max: " << std::numeric_limits<double>::max() << "\n"
//             << "double_min: " << std::numeric_limits<double>::min() << "\n";

// int main(int argc, char *argv[])
// {
// 	//  we use reinterpret cast when we lost type information of a data
// 	if (argc == 2)
// 	{
// 		char	c;
// 		int		i;
// 		float	f;
// 		double	d;
// 		int last_char;
// 		std::string str;

// 		str = argv[1];
// 		// c = argv[1][0];
// 		// if (is_number(argv[1]))// int
// 		// 	i = std::stoi(argv[1]);
// 		// // if (hada float) // float
// 		// // f = std::stof(argv[1]); // on ne doit pas donner le f TO stof
// 		// // d = std::stod(argv[1]);
// 		// c = char(argv[1][0]);
// 		// std::cout << "char: " << c << "\n";
// 		// std::cout << "int: " << i << "\n";
// 		// std::cout << "float: " << f << "\n"; // add .0f a la fin
// 		// std::cout << "double: " << d << "\n"; // add .0

// 		// DETECT THE LITERAL'S TYPE
// 		// if (isdigit(str[0]))
// 		// {
// 		// 	last_char = str.length();
// 		// 	if (str[last_char] == 'f')
// 		// 	{
// 		// 		str[last_char] = '\0';
// 		// 		f = std::stof(str);

// 		// 	}
// 		// }
// 		// std::cout << INT_MAX << " " << FLOAT_MAX << " " << DOUBLE_

// 	}
// }
int main()
{
   int a = 42;
	double b = a;
	int c = b;
	int d = static_cast<int>(b); 
	std::cout << b << " " << c << " " << d << "\n";  

   // double t = 1.79769e+308;
   // float g = static_cast<float>(t);
   // float k = t;
   // float l = (double)t;
   // std::cout << t << " "<< g<< " "<< k << " "<< l<<  "\n";
}
