#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		print_char(int c);
int		print_string(char *s);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, int uppercase);
int		print_pointer(unsigned long ptr);

#endif
