#include "ft_printf.h"
//need to fix the return count.
size_t    ft_putstr(size_t count, char *word)
{
    int i; 
    
    i = 0;
    if (!word)
        return (count);
    while (word[i] != '\0')
    {
        write (1, &word[i], 1);
        i++;
        count++;
    }
    return (count);
}

