#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

// I must return a refernce to my object not a copy
const Brain& Human::getBrain(void) const
{
    return (this->humanBrain);
}

std::string Human::identify(void)
{
    return (this->getBrain().identify());
}

