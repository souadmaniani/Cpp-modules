#include "phoneBook.hpp"
int main(void)
{
    PhoneBook pb;
    std::string command;
    std::string str;
    int index;

    command = "";
    std::cout << "My awesome PhoneBook" << std::endl;
    while(command.compare("EXIT") != 0)
    {
        std::cout << "Enter a command: " << std::endl;
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
        {
            if (pb.getCount() < 8)
            {
                Contact c;
                c.createContact();
                pb.addContact(pb.getCount(), c);
            }
        }
        else if(command.compare("SEARCH") == 0)
        {
            pb.displayAll();
            if (pb.getCount() != 0)
            {
                 std::cout << "Enter index to get a contact's info: " << std::endl;
                index = -1;
                while(!(index >= 0 and index < pb.getCount()))
                {
                    std::getline(std::cin, str);
                    index = std::stoi(str);
                    if (index >= 0 and index < pb.getCount())
                        pb.getContact(index).displayContact();
                    else
                        std::cout << "index not valid rewrite index!!" << std::endl;
                }
            }
        }
    }
    return (0);
}