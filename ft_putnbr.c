#include "ft_printf.h"

void    ft_putnbr(int n, size_t count)
{
    unsigned int nb;
    
    if (n < 0)
    {
        write(1, "-", 1);
        nb = n * -1;
    }
    else
        nb = n;
    if (nb > 9)
    {
        ft_putnbr(nb / 10, count);
        nb = nb % 10;
    }
    char num = nb + '0';
    write(1, &num, 1);
    count++;
}
