#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_div_mod(int *a, int *b)
{
	int mod;
	int div;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}

int main()
{
	int a;
	int b;
	int a1;
	int b1;

	a = 42;
	b = 20;
	a1 = a;
	b1 = b;

	ft_div_mod(&a, &b);
	printf("%i diviser par %i est egual a %i avec un modulo de %i", a1, b1, a, b);
	return 0;
}