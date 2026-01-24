#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		count++;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
