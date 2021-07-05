#include "mutantstack.hpp"
#include <vector>
int main()
{
    std::vector<float> v;
    v.push_back(44444);
    std::stack<int> m_stack(std::deque<int>(v.begin(), v.end()));
    std::cout << m_stack.top() << "\n";

    // std::vector<int> m_vec;
    // std::stack<int, std::vector<int> > m_stack(m_vec);

    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();

    // ++it;
    // --it;
    // while(it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    // std::stack<int> s(mstack);
    return 0;
}
