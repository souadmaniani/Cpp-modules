#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <stack>
#include <iostream>

// template <class Type, class Container = deque<Type> > class stack;
// typename here is letting the compiler know that value_type is a type
// and not a static member of _MyBase
// typedef typename _Mybase::value_type value_type;
// ========> typedef typename std::vector<T>::iterator Iter

// The standard container classes vector, deque and list fulfill
// these requirements. By default, if no container class is specified
// for a particular stack class instantiation, the standard container deque is used

// std::vector<int> v{1, 2, 3, 4, 5};
// for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
// {
//     cout << *it;
// } // prints 54321

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){}
    ~MutantStack(){}
    MutantStack(MutantStack const & src){
        *this = src;
    }

    MutantStack & operator=(MutantStack const & rhs){
        this->c = rhs.c;
        return (*this);
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(){
        return this->c.begin();
    }
    const_iterator begin()const{
        return  this->c.begin();
    }
    iterator end(){
        return  this->c.end();
    }
    const_iterator end() const{
        return  this->c.end();
    }
    reverse_iterator rbegin(){
        return  this->c.rbegin();
    }
    const_reverse_iterator rbegin() const{
        return  this->c.rbegin();
    }
    reverse_iterator rend(){
        return  this->c.rend();
    }
    const_reverse_iterator rend() const{
        return  this->c.rend();
    }

};
 
#endif