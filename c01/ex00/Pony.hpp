#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
    public:
        Pony(int age, float weight, float speed);
        ~Pony();
        void eat(void);
        void drink(void);
        void run(void) const;
        int getAge(void) const;
        void setAge(int age);
        float getWeight(void) const;
        void setWeight(float weight);
        float getSpeed(void) const;
        void setSpeed(float speed);  
    private:
        int age;
        float weight;
        float speed;
};

#endif
