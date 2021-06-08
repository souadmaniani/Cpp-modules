#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string type;
        std::string name;
    public:
        Zombie(std::string type, std::string name);
        ~Zombie();
        void setType(std::string type);
        std::string getType(void) const;
        void setName(std::string name);
        std::string getName(void) const;
        void announce(void) const;     
};

#endif