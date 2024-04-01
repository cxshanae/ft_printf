#include "ft_printf.h"

void    ft_afterp(const char *str, size_t count, va_list args)
{
    count++;
    if (str[count] == '%')
    {
        write(1, "%", 1);
    }
    else if (str[count] == 'c')
    {
        int character = va_arg(args, int);
        write(1, &character, 1);
    }
    else if (str[count] == 'd')
    {
        int number = va_arg(args, int);
        ft_putnbr(number, count);
    }
    else if (str[count] == 's')
    {
        char *word = va_arg(args, char *);
        ft_putstr(count, word);
    }
    else if (str[count] == 'p')
    {
        void *pointer = va_arg(args, void *);
        ft_putptr(pointer, count);
    }
    else if (str[count] == 'i')
    {
        int number = va_arg(args, int);
        ft_puti(number, count);
    }
}
