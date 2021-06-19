#include <stdio.h>

int main()
{
    char *c="souad";
    printf("@ %p\n", &c);
    printf("@ %p\n",(int*)&c);
}