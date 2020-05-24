#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_putstr(char *str);

void ft_swap(char *a, char *b)
{
	char u;

	u = *a;
	*a = *b;
	*b = u;
}

/*
void sort_integerstr(char *argv, int gg)
{
	if (argv[gg] != '\0')
	{

		if (argv[gg] <= argv[gg - 1])
			sort_integerstr(argv, gg +1);
		else if (argv[gg] > argv[gg - 1])
		{
			ft_swap(&argv[gg], &argv[gg -1]);
			if (gg > 1)
				sort_integerstr(argv, gg -1);
		}
	}
	else if (argv[gg - 1] > argv[gg - 2])
	{
		ft_swap(&argv[gg], &argv[gg -1]);
		sort_integerstr(argv, gg -1);
	}
}
*/
void ft_sort_integer_table2(char *tab, int size)
{
	if (tab[size] != '\0')
	{
		if (size > 0)
		{
			if (tab[size] >= tab[size -1])
				ft_sort_integer_table2(tab, size -1);
			else if (tab[size] < tab[size -1])
			{
				ft_swap(&tab[size], &tab[size -1]);
				ft_sort_integer_table2(tab, size +1);
			}

		}
	}
	else 
		ft_sort_integer_table2(tab, size-1);
}

int main(int argc, char *argv[])
{
	int o;

	o = 1;
	printf("%i\n", argc);
	while (o < argc)
	{
		ft_sort_integer_table2(argv[o], 1);
		ft_putstr(argv[o]);
		ft_putstr("\n");
		o++;
	}
	return 0;
}