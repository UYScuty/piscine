#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}
