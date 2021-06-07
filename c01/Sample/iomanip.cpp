#include <iostream>
#include <iomanip>
int main()
{
    // Using setprecision
    double  mt = 1231.125634;
    std::cout << std::setprecision(8);
    std::cout <<"         "  << 1 << "\t" << mt << "\n";
    std::cout << "\n" << "\n";
    // Using setw
    std::cout << std::setw(6) << "month" << std::setw(10) << "year" << "\n";
    // Using setfill
    std::cout << std::setfill('*') << std::setw(5) << 2 << "\n";
    // Using setbase
    int x = 10;
    std::cout << "Octal value : " << std::setbase(8) <<  x <<"\n";
    std::cout << "Décimal value : " << std::setbase(10) << x << "\n";
    std::cout << "Hexdecimal value : " << std::setbase(16) << x << "\n";
    
    //Using setiosflags()
    int num = 50; 
    std::cout << "Setting showbase and uppercase"<< " flag using setiosflags: \n"
    << std::hex << std::setiosflags(std::ios_base::showbase | std::ios_base::uppercase) 
    << num << "\n";
    std::cout << setiosflags(std::ios_base::showpos) << setiosflags(std::ios_base::scientific)
    << 12 << 123.6 << "\n";  

} 