#include "mutantstack.hpp"
#include <vector>

int main()
{

    MutantStack<int>    mstack;

    mstack.push(42);
    mstack.push(5);
    mstack.push(17);

    std::cout << "mstack.top(): " << mstack.top() << std::endl;

    mstack.pop();

    std::cout <<  "mstack.size(): " <<mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(1337);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "stack: \n";
    while(it != ite)
    {
        std::cout << " " << *it;
        ++it;
    }
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    std::cout << "\nreverse display: \n";
    while (rit != rite)
    {
        std::cout << " " << *rit;
        rit++;
    }
    std::cout << "\n";
    std::stack<int> s(mstack);
    std::cout << "s.top(): "<< s.top() << "\n";
    MutantStack<int> copy = mstack;
    std::cout << "copy.top(): "<< copy.top() << "\n";
    return 0;
}
