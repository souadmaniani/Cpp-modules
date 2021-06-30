#include "Base.hpp"

Base::~Base()
{
}

Base * Base::generate(void)
{
    srand(time(0));
    Base *tab[3] = {new A(), new B(), new C()};
    int i = rand() % 3;
    for (int j = 0; j < 3; j++)
    {
        if (i != j)
            delete tab[j];
    }
    return (tab[i]);
}
/******************** dynamic_cast ************************/
//  it takes place on the run time not during the compilation
// works only with polymorphic instance (subtype polymorphisme)
// class should have a virtual member function

void identify(Base& p)
{
    try {
	    A & d = dynamic_cast<A &>(p);
        (void)d;
	    std::cout << "A\n";
	}
	catch (std::bad_cast &bc) {
	    try {
            B & d = dynamic_cast<B &>(p);
            (void)d;
            std::cout << "B\n";
        }
        catch (std::bad_cast &bc) {
            try {
                C & d = dynamic_cast<C &>(p);
                (void)d;
                std::cout << "C\n";
            }
            catch (std::bad_cast &bc) {
                std::cout << "Conversion is NOT OK: " << bc.what() << "\n";
	        }
        }
	}
}
