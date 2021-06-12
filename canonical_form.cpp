#include "canonical_form.hpp"

Sample::Sample( void ):_foo( 0 )
{
	 std::cout << "Default Constructor called" << std::endl;
	 return;
}

Sample::Sample(int const foo) : _foo(foo)
{
	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Sample::Sample( Sample const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}
// rhs==>right hand side
Sample & Sample::operator=( Sample const & rhs)
{
	std::cout << "Assignation operator called from " << this->_foo;
	std::cout << " to " << rhs.getFoo() << std::endl;
	this->_foo = rhs.getFoo();
	return *this;
}

Sample::~Sample()
{
	 std::cout << "Destructor called" << std::endl;
}

int Sample::getFoo( void ) const
{
	return this->_foo;
}

std::ostream & operator<<( std::ostream & o, Sample const & rhs )
{
	o << rhs.getFoo();
	return o;
}

int main()
{
	Sample instance0;
	Sample instance1( 7 );
	Sample instance2( 6 );
	Sample instance4( 9 );
	std::cout << "@instance1 in assignation operator " << &instance1 << std::endl;
	instance2 = instance1;
	Sample instance3(instance4);
	std::cout << "instance2 " << instance2 <<  std::endl;
	// std::cout << "@instance2 in assignation operator " << &instance2 << std::endl;
}
