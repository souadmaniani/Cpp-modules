#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample {

public:
	Sample( void ); //canonical
	Sample( int const foo);
	Sample( Sample const & src); //canonical
	~Sample( void );//canonical

	Sample & operator=( Sample const & rhs ); //canonical

	int getFoo( void ) const;
private:
	int _foo;

};

std::ostream & operator<<( std::ostream & o, Sample const & rhs );

#endif