#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{

}
Brain::~Brain()
{

}

int Brain::getWeight(void)
{
	return (this->weight);
}

int Brain::getVolume(void)
{
	return (this->volume);
}

void Brain::setWeight(int weight)
{
	this->weight = weight;
}

void Brain::setVolume(int volume)
{
	this->volume = volume;
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
