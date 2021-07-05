#ifndef SPAN_H
#define SPAN_H
#include <vector>
#include <iostream>
class Span
{
private:
    unsigned int N;
    std::vector<int> vect;
    static unsigned int _count;
public:
    Span(unsigned int n);
    ~Span();
    void addNumber(int num);
    int shortestSpan(void);
    int longestSpan(void);
    void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
    // void print();
};

#endif