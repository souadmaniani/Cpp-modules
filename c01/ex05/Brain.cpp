#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
    std::cout << "\033[1;31m Default Constructor called for Brain \033[0m" << "\n";

}
Brain::~Brain()
{
    std::cout << "\033[1;31m Destructor called for Brain \033[0m" << "\n";
}

std::string to_string(Brain *instance)
{
  std::ostringstream ss;
  ss << instance;
  return (ss.str());
}

std::string Brain::identify(void)
{
    return (to_string(this));
}
