#include "Brain.hpp"

class Human 
{
	private:
		const Brain instance;
	public:
		Human();
		~Human();
		std::string identify(void);
		Brain getBrain(void) const;
};
