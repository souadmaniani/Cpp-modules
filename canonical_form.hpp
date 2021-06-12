#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample {

public:
	Sample( void );
	Sample( int const foo);
	Sample( Sample const & src);
	~Sample( void );

	Sample & operator=( Sample const & rhs );

	int getFoo( void ) const;
private:
	int _foo;

};

std::ostream & operator<<( std::ostream & o, Sample const & rhs );

#endif