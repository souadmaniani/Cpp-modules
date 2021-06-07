#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iostream>
# define nb_fields  11

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        std::string getInfoContact(int i);
        void setInfoContact(int i, std::string value);
        void createContact(void);
        void displayContact(void);
    private:
        std::string _infoContact[nb_fields];
        static std::string _fields[nb_fields];
};
#endif
