#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
	printf("a =%i\n, b =%i\n", *a, *b);
}

int main()
{
	int a;
	int b;

	a = 42;
	b = 51;

	ft_swap(&a, &b);
	return 0;
}