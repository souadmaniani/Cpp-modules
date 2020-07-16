#include <iostream>

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (*str++)
        i++;
    return (i);
}

void rm_space(char **str)
{
    int len;
    char *ptr;

    while (**str == ' ' && **str)
        (*str)++;
    len = ft_strlen(*str);
    ptr = *str;
    *str +=len - 1;
    while (**str == ' ' && **str)
    {
        **str = '\0';
        (*str)--;
    }
    *str = ptr;  
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 0;
        while (++i != argc)
        {
            rm_space(&argv[i]);
            j = -1;
            while (argv[i][++j] != '\0')
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
                    argv[i][j] -= 32;
        }
        i = 0;
        while(++i != argc - 1)
             std::cout << argv[i] << " " ;
        std::cout << argv[i] << std::endl;
    }
    return (0);  
}