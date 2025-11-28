#include "ft_printf.h"

int print_char(int c)
{
    ft_putchar_fd((char)c, 1);
    return (1);
}

int print_string(char *s)
{
	int	s_len;

    if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	s_len = ft_putstr_fd(s, 1);
    return (s_len);
}