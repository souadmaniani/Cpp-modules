#include <list>
#include <iterator>
#include <iostream>
void show_list(std::list <int> g)
{
    std::list <int> :: iterator it;
    for (it = g.begin() ; it != g.end(); it++)
    {
        std::cout << '\t' << *it;
    }
    std::cout << "\n";
    
}
int main()
{
    std::list <int> list1;
    for (size_t i = 0; i < 10; i++)
    {
        list1.push_back(i * 2);
    }
    show_list(list1);
    list1.push_front(-1);
    show_list(list1);
    list1.pop_back();
    show_list(list1);
    list1.reverse();
    show_list(list1);
    list1.sort();
    show_list(list1);
    std::cout << list1.front() << "\n";
    std::cout << list1.back() << "\n";
    // if (list1.empty())
}