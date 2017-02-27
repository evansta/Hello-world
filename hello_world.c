#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_maff_alphabet()
{
    char    first;
    char    second;
    int     i;
    
    first = 'A';
    second = 'b';
    i = 0;
    while (i <= 12)
    {
        ft_putchar(first);
        ft_putchar(second);
        first = first + 2;
        second = second + 2;
        i++;
    }
    ft_putchar('\n');
}
int     main()
{
    ft_maff_alphabet();
    return (0);
}
