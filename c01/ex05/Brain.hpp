# ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain {

	private:
		int weight;
		int volume;
    public:
		Brain();
		~Brain();
		std::string identify(void);
};

#endif