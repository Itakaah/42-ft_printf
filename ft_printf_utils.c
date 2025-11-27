#include "ft_printf.h"

int ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
    return (1);
}

size_t ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_putstr_fd(char *s, int fd)
{
	size_t	i;

    if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
    return (i);
}