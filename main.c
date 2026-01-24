#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1, ret2;

    ret1 = ft_printf("Char: %c\n", 'A');
    ret2 = printf("Char: %c\n", 'A');
    printf("Retours: %d vs %d\n\n", ret1, ret2);

    ret1 = ft_printf("String: %s\n", "Hello");
    ret2 = printf("String: %s\n", "Hello");
    printf("Retours: %d vs %d\n\n", ret1, ret2);

    ret1 = ft_printf("Int: %d\n", -42);
    ret2 = printf("Int: %d\n", -42);
    printf("Retours: %d vs %d\n\n", ret1, ret2);

	// Test NULL string
	ret1 = ft_printf("NULL string: %s\n", NULL);
	ret2 = printf("NULL string: %s\n", NULL);
	printf("Retours: %d vs %d\n\n", ret1, ret2);

	// Test NULL pointer
	ret1 = ft_printf("NULL pointer: %p\n", NULL);
	ret2 = printf("NULL pointer: %p\n", NULL);
	printf("Retours: %d vs %d\n\n", ret1, ret2);

	// Test INT_MIN
	ret1 = ft_printf("INT_MIN: %d\n", -2147483648);
	ret2 = printf("INT_MIN: %d\n", -2147483648);
	printf("Retours: %d vs %d\n\n", ret1, ret2);

	// Test %%
	ret1 = ft_printf("Percent: %%\n");
	ret2 = printf("Percent: %%\n");
	printf("Retours: %d vs %d\n\n", ret1, ret2);

	// Test hex
	ret1 = ft_printf("Hex: %x et %X\n", 255, 255);
	ret2 = printf("Hex: %x et %X\n", 255, 255);
	printf("Retours: %d vs %d\n\n", ret1, ret2);

    return (0);
}