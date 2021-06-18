#include "Squad.hpp"

Squad::Squad()
{

    this->units = NULL;
    this->count = 0;
}

Squad::~Squad()
{
    for(int i = 0 ; i < count; i++)
    {
        delete units[i];
        units[i] = NULL;    
    }
    // if (units)
    // {
    //     delete [] units;
    //     units = NULL;
    // }
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
    // std::cout << "count in copy_table: " << this->count << "\n";
    return (dst);
}

int Squad::push(ISpaceMarine* x)
{
    int i;
    ISpaceMarine** tmp;

    i = 0;
    // std::cout << "count in push: " << this->count << "\n";
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
    *this = src;
}


Squad & Squad::operator=(Squad const & rhs)
{
    // std::cout << "Assignation Operator: \n";
    // if (this == &rhs)
    //     return *this;
    // if (units)
    // {
    //     delete [] units;
    //     delete(units);
    // std::cout << "delete old units \n";
    // }
    // units = new ISpaceMarine*[count];
    // units = copy_table(units, rhs.units);
    // std::cout << "replace new units \n";
    (void)rhs;
    return (*this);
}