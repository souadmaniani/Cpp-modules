#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iomanip>
# include "contact.hpp"
# define nb_contact  8

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        int getCount(void);
        Contact getContact(int index);
        void addContact(int index, Contact c);
        void displayAll(void);
    private:
        static int _count;
        Contact _contacts[nb_contact];
};
#endif
