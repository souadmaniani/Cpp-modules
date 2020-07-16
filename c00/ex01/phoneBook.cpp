#include "phoneBook.hpp"

int PhoneBook::_count = 0;
PhoneBook::PhoneBook(void)
{
    // std::cout <<"Constructor called for phoneBook"<< std::endl;
}

PhoneBook::~PhoneBook(void)
{
    // std::cout <<"Destructor called for phoneBook"<< std::endl;
}

int PhoneBook::getCount(void)
{
    return (this->_count);
}

Contact PhoneBook::getContact(int index)
{
    return (this->_contacts[index]);
}

void PhoneBook::addContact(int index, Contact c)
{
    this->_contacts[index] = c;
    std::cout << "Contact is added successfully" << std::endl;
    PhoneBook::_count += 1;
}

void displayColumn(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
         std::cout << std::setw(10) << std::right << str;
    std::cout << "|";
}

void PhoneBook::displayAll(void)
{
    int index;
    Contact c;
    int count;

    index = -1;
    displayColumn("index");
    displayColumn("first name");
    displayColumn("last name");
    displayColumn("nickname");
    // std::cout << std::endl;
    // std::cout << "    " << std::setw(41) << std::setfill('-') << '-';
    std::cout << std::endl;
    count = getCount();
    while(++index < count)
    {
       c = getContact(index);
       displayColumn(std::to_string(index));
       displayColumn(c.getInfoContact(0));
       displayColumn(c.getInfoContact(1));
       displayColumn(c.getInfoContact(2));
       std::cout << std::endl;
    }    
}