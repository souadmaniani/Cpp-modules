#include "contact.hpp"

std::string Contact::_fields[nb_fields] = {
    "first name",
    "last name",
    "nickname",
    "login",
    "postal address",
    "email address", 
    "phone number",
    "birthday date", 
    "favorite meal",
    "underwear color", 
    "darkest secret"
};

Contact::Contact(void)
{
    // std::cout <<"Constructor called for contact"<< "\n";   
}

Contact::~Contact(void)
{
    // std::cout <<"Destructor called for contact"<<"\n";
}

std::string Contact::getInfoContact(int i)
{
    return (this->_infoContact[i]);
}

void Contact::setInfoContact(int i, std::string value)
{
    this->_infoContact[i] = value;
}

void Contact::displayContact(void)
{
    int i;

    i = -1;
    while(++i < nb_fields)
    {
        std::cout << getInfoContact(i) << "\n";
    }
}

void Contact::createContact(void)
{
    int i;

    i = -1;
    std::string value;

    while (++i < nb_fields)
    {
        std::cout << Contact::_fields[i] << ": ";
        std::getline(std::cin, value);
        while (value.compare("") == 0)
        {
            std::cout << "Empty value!! Enter a valid value!" << "\n";
            std::cout << Contact::_fields[i] << ": ";
            std::getline(std::cin, value);
        }
        setInfoContact(i, value);
    }
}