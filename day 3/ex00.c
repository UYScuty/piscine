#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr);
{
	int p;

	p = *nbr;
	ft_putchar(p);
}

int (main)
{
	int u;
	
	u = 2;
	ft_ft(&u);
	return 0;
}