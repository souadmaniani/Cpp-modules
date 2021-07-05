#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <stack>
#include <iostream>

// template <class Type, class Container = deque<Type> > class stack;
// typedef typename _Mybase::value_type value_type;

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    ~MutantStack();
    MutantStack(MutantStack const & src);
    MutantStack & operator=(MutantStack const & rhs);

};

template <typename T>
MutantStack<T>::MutantStack()
{}
template <typename T>
MutantStack<T>::~MutantStack()
{}
template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
    *this = src;
}
template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs)
{
    (void)rhs;
    return (*this);
}

#endif