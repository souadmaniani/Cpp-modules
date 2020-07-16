#include <stdio.h>

int var = 1;
int  f(void){return 2;}

namespace foo
{
    int var = 2;
    int  f(void){return 4;}
}

namespace bar
{
     int var = 3;
    int  f(void){return 9;}
}
namespace muf = bar;

int main()
{
    printf("var = %d\n", var);
    printf("f() = %d\n", f());
    printf("foo::var = %d\n", foo::var);
    printf("foo::f() = %d\n", foo::f());
    printf("bar::var = %d\n", bar::var);
    printf("bar::f() = %d\n", bar::f());
    printf("muf::var = %d\n", muf::var);
    printf("muf::f() = %d\n", muf::f());
    return 0;
}