#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int n1, n2, total;

	printf("=== IMPORTANCE DU RETOUR ===\n\n");

	// Test 1 : Compter avec le vrai printf
	printf("Avec printf :\n");
	n1 = printf("Hello");
	printf(" → retourne %d\n", n1);

	n2 = printf("World");
	printf(" → retourne %d\n", n2);

	total = n1 + n2;
	printf("Total : %d caractères\n\n", total);

	// Test 2 : Compter avec nos fonctions
	printf("Avec nos fonctions :\n");
	n1 = ft_putstr_fd("Hello", 1);
	printf(" → retourne %d\n", n1);

	n2 = ft_putstr_fd("World", 1);
	printf(" → retourne %d\n", n2);

	total = n1 + n2;
	printf("Total : %d caractères\n\n", total);

	// Test 3 : Simuler ft_printf
	printf("Simuler ft_printf (\"Hello %s\", \"42\"):\n");
	total = 0;
	total += ft_putstr_fd("Hello ", 1);
	total += ft_putstr_fd("42", 1);
	printf("\nTotal caractères affichés : %d (attendu: 8)\n", total);

	return (0);
}
