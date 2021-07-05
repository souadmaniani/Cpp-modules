#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::vector<int> v;
    Span myspan = Span(10001);
    srand(time(NULL));
    int j;
    for (size_t i = 0; i < 11000; i++)
    {
        j = rand() % 10000;
        v.push_back(j);
    }
    try
    {
        myspan.addNumber(v.begin(), v.end());
    }
    catch(const char * str)
    {
        std::cerr << str;
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