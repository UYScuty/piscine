#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int d;
	int resultat;
	int nombre;

	nombre = 0;
	d = 1; 
	if (str[0] == '-')
	{
		d = -1;
		nombre = 1;
	}
	while (str[nombre] != '\0')
	{
		resultat = resultat*10 + str[nombre] - '0';
		nombre++;
	}
	return resultat;
}
void porte(int max_range, int entr, int etoile, int free)
{	
if (max_range % 2 == 0 && entr <= max_range - 1)
	if ((etoile / 2 - max_range / 2) < free - 1 && free - 1 < (etoile / 2 + max_range / 2))
		if (max_range > 4 && entr == max_range/2)
			if ((etoile / 2 - max_range / 2) + 1< free - 1 && free - 1 <(etoile / 2 - max_range / 2) + 3)
				ft_putchar('$');
			else
				ft_putchar('|');
		else
			ft_putchar('|');
	else
		ft_putchar('*');
else if (max_range % 2 != 0 && entr <= max_range)
	if ((etoile / 2 - max_range / 2) < free && free < (etoile / 2 + max_range / 2) + 2)
		if (max_range > 4 && entr == max_range/2 + 1)
			if ((etoile / 2 - max_range / 2) + 1< free && free < (etoile / 2 - max_range / 2) + 3)
				ft_putchar('$');
			else
				ft_putchar('|');
		else
			ft_putchar('|');
	else
		ft_putchar('*');
else
	ft_putchar('*');
}

int calculate(int nb, int max_range, int v)
{
	int nombre;
	nombre = 0;
	if (v == 1)
	{
	while (max_range - nb > 0)
		{
			nombre = nombre + max_range* 1.5 + 3 ;
			max_range--;
		}
	}
	else
	{
		while (nb > 0)
		{
			nombre = nombre + ((nb +1) + (nb / 2) +2) *2;
			nb--;
		}	
	}
	return(nombre);
}

void ft_sastantua1(int nb, int max_range)
{
	int entr;
	int free;
	int etoile;

	entr = nb + 2;
	if (nb > 1)
		ft_sastantua1(nb -1, max_range);
	while (entr != 0)
	{
		free = entr + calculate(nb, max_range, 1) - 1;
		while (free > 0)
		{
				ft_putchar(' ');
				free--;
		}
		ft_putchar('/');
		free = (calculate(nb, max_range, 0) - (entr*2)) -1;
		etoile = free;
		while (free > 0)
		{
			if (nb == max_range)
				porte(max_range, entr, etoile, free);
			else
				ft_putchar('*');
			free--;
		}
		ft_putchar(92);
		ft_putchar('\n');
		entr--;
	}
}

void ft_sastantua(char* nb)
{
	int number;

	number = ft_atoi(nb);
	if (number > 0)
		ft_sastantua1(number, number);
}

int main(int argc, char* argv[])
{

	ft_sastantua(argv[1]);
	return 0;
}