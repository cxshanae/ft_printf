#include "ft_printf.h"
//we need to fix the count in all the sub-functions. 
int    ft_printf(const char *str, ...)
{
    size_t count;
    va_list args;
    
    va_start(args, str);
    count = 0;
    if(!str)
        return(0);
    while (str[count] != '\0')
    {
        if(str[count] == '%')
        {
            ft_afterp(str, count, args);
            count++;
        }
        else
            write(1, &str[count], 1);
        count++;
    }
    write(1, "\n", 1); //need to remove this for the implemntation of "\n"
    va_end(args);
    return (count);
}
