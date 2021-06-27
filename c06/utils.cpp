#include "convert.hpp"

int is_number(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
