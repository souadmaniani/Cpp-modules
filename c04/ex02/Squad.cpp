#include "Squad.hpp"

Squad::Squad()
{

    this->units = NULL;
    this->count = 0;
}

Squad::~Squad()
{
    int i;

    i = -1;
    while (++i < count)
    {
        delete units[i];
        units[i] = NULL;    
    }
    delete [] units;
}

int Squad::getCount() const
{
    return (this->count);
}
ISpaceMarine* Squad::getUnit(int i) const
{
    if (count == 0)
        return (NULL);
    return (this->units[i]);
}

ISpaceMarine** Squad::copy_table(ISpaceMarine** dst, ISpaceMarine** src)
{
    int i;

    i = -1;
    while (++i < this->count)
        dst[i] = src[i];
    return (dst);
}

int Squad::push(ISpaceMarine* x)
{
    int i;
    ISpaceMarine** tmp;

    i = 0;
    if (count)
    {
        if (!x)
            return 0;
        while (units[i] != x && i < count)
            i++;
    }
    if (i == count)
    {
        if (units)
        {
            tmp = new ISpaceMarine*[count];
            tmp = copy_table(tmp, units);
            delete [] units;
            units = new ISpaceMarine*[count + 1];
            units = copy_table(units, tmp);
            delete [] tmp;
        }
        else
            units = new ISpaceMarine*[1];
        units[count] = x;
        count +=1;
    }
    return (count);
}



Squad::Squad(Squad const & src)
{
    std::cout << "Copy Constructor: \n";
    *this = src;
}


Squad & Squad::operator=(Squad const & rhs)
{
    int i;

    std::cout << "Assignation Operator: \n";
    if (this == &rhs)
        return *this;
    if (units)
    {
        i = -1;
        while (++i < count)
        {
            delete units[i];
            units[i] = NULL;    
        }
        delete [] units;
    }
    units = new ISpaceMarine*[count];
    i = -1;
    while (++i < count)
        units[i] = rhs.getUnit(i)->clone();
    return (*this);
}
