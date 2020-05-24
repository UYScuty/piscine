#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a/b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("%i diviser par %i est egual a %i avec un modulo de %i", a, b, div, mod);
	return 0;
}