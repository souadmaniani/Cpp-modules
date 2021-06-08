#include <iostream>

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (*str++)
        i++;
    return (i);
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
    else
    {
        i = 0;
        while (++i != argc)
        {
            j = -1;
            while (argv[i][++j] != '\0')
                argv[i][j] = toupper(argv[i][j]);
        }
        i = 0;
        while(++i != argc - 1)
             std::cout << argv[i];
        std::cout << argv[i] << "\n";
    }
    return (0);  
}
