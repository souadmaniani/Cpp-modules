#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{

}
Brain::~Brain()
{

}

std::string to_string(const Brain *instance)
{
  std::ostringstream s1;
  s1 << instance;
  return (s1.str());
}

std::string Brain::identify(void) const
{
    return (to_string(this));
}
