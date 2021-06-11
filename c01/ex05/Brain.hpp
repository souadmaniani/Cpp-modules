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
		int getWeight(void);
		void setWeight(int weight);
		int getVolume(void);
		void setVolume(int weight);
		std::string identify(void) const;
};

#endif
