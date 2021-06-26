#include  <iostream>

class Parent { public :virtual ~Parent( void ) {}};
class Child1: public Parent{};
class Child2: public Parent{};
class Unrelated            {};

// OPERATOR CAST
class Foo
	{
	private:
		float _v;
	public:
		Foo(float const v) : _v(v) {}

		float getV(void) { return this->_v;}

		operator float() { return this->_v;}
		operator int() { return static_cast<int>(this->_v);}
	};

// EXPLICIT KEYWORD	
class A {};
class B {};

class C {

public:
					C( A const & _) { return ;}
		explicit 	C( B const & _) { return ;}
};

void f(C const & _)
{
	return;
}
int main()
{
	// int to double
	// int a = 42;
	// double b = a; //implicit conversion cast
	// std::cout << b << "\n";
	// double c = (double)a; //explicit conversion cast
	// std::cout << c << "\n";

	// double to int
	// double d = a; // Implicit promotion -> OK
	// int  e = d; // Implicit demotion -> Harzardous 
	// std::cout << e << "\n";
	
	// float m = 4.215f;
	// int *n  = (int*)&m; // reinterpret_cast
	// printf("%d\n", *n);

	// int  a = 1337;

	// int const   * b = &a; // Implicit type qualifier cast
	// int const   * c = (int const *)&a; // Explicit type qualifier cast

	// int const   * d = &a;
	// int         * e = d; // Implicit demotion -> Hell no !
	// int         * f = (int *)d; // Explicit demotion -> OK 

// Promotion – going from a smaller domain to a larger domain
// Demotion – going from a larger domain to a smaller domain

/* *********************************** STATIC CAST  ******************************************************/

	// int a = 42;
	// double b = a;
	// int c = b;
	// int d = static_cast<int>(b); 
	// std::cout << b << " " << c << " " << d << "\n";   

	// exmpl2
	// Child1 a;
	// Parent * b = &a; // implicit upcast
	// // Child1 *c = b; // implicit downcast
	// Child2 *d = static_cast<Child2 *>(b); // Explicit downcast -> ok
	// // Unrelated *e = static_cast<Unrelated *>(&a); // Explicit conversion -> No

/* ************************************* DYNAMIC CAST  *****************************************************/

// it takes place on the run time not during the compilation
// works only with polymorphic instance (subtype polymorphisme)
// class should have a virtual member function
	// Child1 a;
	// Parent * b = &a;
	// //Explicit downcast pointer 
	// Child1 *c = dynamic_cast<Child1 *>(b);
	// if (c == NULL) {
	//     std::cout << "Conversion is NOT OK\n";
	// }
	// else {
	//     std::cout << "Conversion is OK\n";
	//     }
	// //Explicit downcast reference 
	// try {
	//     Child2 & d = dynamic_cast<Child2 &>(*b);
	//     std::cout << "Conversion is OK\n";
	// }
	// catch (std::bad_cast &bc) {
	//     std::cout << "Conversion is NOT OK: " << bc.what() << "\n";
	// }

/* ************************************* REINTERPRET CAST  *****************************************************/

	// //  we use reinterpret cast when we lost type information of a data
	// float	a 	= 420.042f;
	// void	*b 	= &a; // implicit promotion -> ok
	// int		* c = reinterpret_cast<int *>(b); // Explicit demotion -> ok
	// std::cout << *c <<  "\n"; // 1137837408
	// int		& d = reinterpret_cast<int &>(b); //explicit demotion  -> ok
	// float *e = reinterpret_cast<float *>(c);
	// std::cout << *e <<  "\n"; // 420.042

/* ************************************* CONST CAST  *****************************************************/

// const is heigher than mutable type
	// int  a = 42;

	// int const   * b = &a; // Implicit promotion
	// // int *c = b; // Implicit demotion -> NO
	// int *d = const_cast<int *>(b); // Explicit demotion -> OK
	// std::cout << *d << "\n";

/* ************************************* CAST OPERATOR  *****************************************************/

	// operator int() { return static_cast<int>(this->_v);
	// Foo		a(420.024f);
	// float	b = a;
	// int		c = a;
	// std::cout << a.getV() << "\n";
	// std::cout << b << "\n";
	// std::cout << c << "\n";

/* ************************************* explicit  keyword  *****************************************************/
	f( A() ); // Implicit conversion -> OK
	// f ( B() ); // Implicit conversion NOT OK, constructor is explicit
}
