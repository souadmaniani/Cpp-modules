#include "easyfind.hpp"
#include <vector>
#include <list>
int main()
{
    {   
        std::vector<int> vect;
        std::vector<int>::iterator itr;

        for (size_t i = 0; i < 10; i++)
            vect.push_back(i * 2);
        std::cout << "array: \n";
        for (itr = vect.begin(); itr != vect.end(); itr++)
            std::cout << " " << *itr;
        std::cout << "\n\n";
        try
        {
            easyfind(vect, 42);  
        }
        catch(std::string str)
        {
            std::cerr << str << '\n';
        }
        try
        {
            easyfind(vect, 18);  
        }
        catch(std::string str)
        {
            std::cerr << str << '\n';
        }
    }

    {
        std::list<int> lst;
        std::list<int>::iterator itr;

        for (size_t i = 0; i < 10; i++)
            lst.push_back(i * 3);
        std::cout << "list: \n";
        for (itr = lst.begin(); itr != lst.end(); itr++)
            std::cout << " " << *itr;
        std::cout << "\n\n";
        try
        {
            easyfind(lst, -1);  
        }
        catch(std::string str)
        {
            std::cerr << str << '\n';
        }
        try
        {
            easyfind(lst, 24);  
        }
        catch(std::string str)
        {
            std::cerr << str << '\n';
        }
    }
}