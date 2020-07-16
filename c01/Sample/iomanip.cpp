#include <iostream>
#include <iomanip>
int main()
{
    // Using setprecision
    double  mt = 1231.125634;
    std::cout << std::setprecision(8);
    std::cout <<"         "  << 1 << "\t" << mt << std::endl;
    std::cout << std::endl << std::endl;
    // Using setw
    std::cout << std::setw(6) << "month" << std::setw(10) << "year" << std::endl;
    // Using setfill
    std::cout << std::setfill('*') << std::setw(5) << 2 << std::endl;
    // Using setbase
    int x = 10;
    std::cout << "Octal value : " << std::setbase(8) <<  x <<std::endl;
    std::cout << "Décimal value : " << std::setbase(10) << x << std::endl;
    std::cout << "Hexdecimal value : " << std::setbase(16) << x << std::endl;
    
    //Using setiosflags()
    int num = 50; 
    std::cout << "Setting showbase and uppercase"<< " flag using setiosflags: \n"
    << std::hex << std::setiosflags(std::ios_base::showbase | std::ios_base::uppercase) 
    << num << std::endl;
    std::cout << setiosflags(std::ios_base::showpos) << setiosflags(std::ios_base::scientific)
    << 12 << 123.6 << std::endl;  

} 