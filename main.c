#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    char *ptr;
    ptr = "clarisse";
    ft_printf("my code %p", ptr);
    printf("printf %p\n", ptr);
    return (0);
}
