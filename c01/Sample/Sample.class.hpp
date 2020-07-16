#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
    public:
        int foo;
        char a1;
        float const pi;
        int getVar(void) const;
        void setVar(int v1);
        Sample();
        ~Sample(void);
        int c;
        void bar(void);
        static int getCont(void);
        int compare(Sample *other);
    private:
        static int cont;
        int var;
};
#endif