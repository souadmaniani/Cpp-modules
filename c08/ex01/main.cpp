#include "span.hpp"

int main()
{
    Span sp = Span(5);
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(1);
        sp.addNumber(11);
        sp.addNumber(11);
    }
    catch(const char * str)
    {
        std::cerr << str;
    }

    Span myspan = Span(10000);
    srand(time(NULL));
    int j;
    try
    {
        for (size_t i = 0; i < 10000; i++)
        {
           j = rand() % 10000;
           myspan.addNumber(j);
        }
    }
    catch(const char *str)
    {
        std::cerr << str << '\n';
    }
    
    try
    {
        std::cout << myspan.shortestSpan() << std::endl;
    }
    catch(const char * str)
    {
        std::cerr << str << '\n';
    }
    try
    {
        std::cout << myspan.longestSpan() << std::endl;
    }
    catch(const char * str)
    {
        std::cerr << str << '\n';
    }
    // myspan.print();
}