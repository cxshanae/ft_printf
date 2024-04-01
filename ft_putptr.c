#include <unistd.h>
#include "ft_printf.h"

size_t    ft_putptr(void *pointer, size_t count)
{
    s_ptr ptrst;
    ptrst.hex_digits = "0123456789abcdef";
    ptrst.number = (unsigned long)pointer;
    ptrst.i = 0;
    if (!pointer)
    {
        write(1, "0x0", 3); 
        return (count + 3);
    }
    while(ptrst.number)
    {
        ptrst.output[ptrst.i++] = ptrst.hex_digits[ptrst.number % 16];
        ptrst.number = ptrst.number / 16;
    }
    write(1, "0x", 2);
    count = count + 2;
    while (ptrst.i--) 
    {
        write(1, &ptrst.output[ptrst.i], 1);
        count++;
    }
    return (count);
}

