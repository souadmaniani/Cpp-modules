#include <string>
#include <iostream>

void memoryLeak()
{
    std::string panther = std::string("String panther");
    std::cout << panther << "\n";
}

// int main()
// {
//     memoryLeak();
// }