#include "span.hpp"
#include <algorithm>
unsigned int Span::_count = 0;

Span::Span(unsigned int n)
{
    this->N = n;
    Span::_count = 0;
}

void Span::addNumber(int num)
{
    if (Span::_count < N)
    {
        vect.push_back(num);
        Span::_count +=1;
    }
    else
        throw ("Reach the limit\n");
}
int Span::shortestSpan(void)
{
    if (Span::_count <= 1)
        throw ("There is no span to find");
    sort(vect.begin(), vect.end());
    std::vector<int>::iterator itr;
    int shortest_span = vect[1] - vect[0];
    for (itr = vect.begin(); itr != prev(vect.end()); itr++)
    {
        if (*(itr + 1 ) - *itr < shortest_span)
            shortest_span = *(itr + 1 ) - *itr;
    }
    return (shortest_span);
    
}

int Span::longestSpan(void)
{
    if (Span::_count <= 1)
        throw ("There is no span to find");
    int min = *min_element(vect.begin(), vect.end());
    int max = *max_element(vect.begin(), vect.end());
    return (max - min);
}
Span::~Span()
{
}
void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    std::vector<int>::iterator itr;

    for (itr = start; itr != end; itr++)
    {
        if (Span::_count < N)
        {
            vect.push_back(*itr);
            Span::_count +=1;
        } 
        else
           throw ("Reach the limit\n"); 
    }
    
}
// void Span::print()
// {
//     std::vector<int>::iterator itr;
//     for ( itr = vect.begin(); itr != vect.end(); itr++)
//         std::cout << *itr  << "\n";
//     // std::cout << "\n";
// }
