
#include "templates.hpp"

int main(void) {

    Test <int> t;
    int a = 2;
    int b = 3;

    t.swap( &a, &b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << t.min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << t.max( a, b ) << std::endl;

    // std::string c = "chaine1";
    // std::string d = "chaine2";
    //  Test b<std::string>;
    // ::swap(c, d);
    // std::cout << "c = " << c << ", d = " << d << std::endl;
    // std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    // std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0 ;
}
