#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(int *str)
{
	int number;

	number = 0;
	while(str[number] != 0)
		number++;
	
}

void ft_swap(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}

void ft_sort_integer_table2(int *tab, int size, int intial_size)
{
	if (size < intial_size)
	{
		if (size > 0)
		{
			if (tab[size] >= tab[size -1])
				ft_sort_integer_table2(tab, size -1, intial_size);
			else if (tab[size] < tab[size -1])
			{
				ft_swap(&tab[size], &tab[size -1]);
				ft_sort_integer_table2(tab, size +1);
			}

		}
	}
	else 
		ft_sort_integer_table2(tab, size-1, intial_size);
}

void ft_sort_integer_table(int *tab, int size)
{
	ft_sort_integer_table2(tab, size, size)
}

int main(int argc, char **argv)
{
	int i[argc - 1];
	i[0] = atoi(argv[1]);
	i[1] = atoi(argv[2]);
	i[2] = atoi(argv[3]);
	i[3] = atoi(argv[4]);
	i[4] = atoi(argv[5]);
	i[5] = atoi(argv[6]);
	ft_sort_integer_table(i, 6);
	printf(" le premier est = %i\n le dexieme est = %i\n le troisième est = %i\n le quatième est = %i\n le cinquième est = %i\n le sixème est = %i\n", i[0], i[1], i[2], i[3], i[4], i[5]);
	return 0;
}