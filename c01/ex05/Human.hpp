#include "Brain.hpp"

class Human 
{
	private:
		const Brain humanBrain;
	public:
		Human();
		~Human();
		std::string identify(void);
		const Brain& getBrain(void) const;
};
