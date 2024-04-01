#include <unistd.h>
#include <stdarg.h>

struct  s_ptr
{
    unsigned long number;
    char *hex_digits;
    char output[19];
    int i;
} typedef s_ptr;

int     ft_printf(const char *str, ...);
void    ft_afterp(const char *str, size_t count, va_list args);
void    ft_putnbr(int n, size_t count);
size_t  ft_putstr(size_t count, char *word);
size_t  ft_putptr(void *pointer, size_t count);
size_t  ft_formati(int number, size_t count);