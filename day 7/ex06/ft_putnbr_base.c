#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void verif_base(char *base, int number1, int number2, int number_base)
{	
	if (base[number1] == base[number2])
	{
		printf("base non valide\n");
		exit(0);
	}
	else if (number2 < number_base)
		if (number2 + 1 != number1)
			verif_base(base, number1, number2 + 1, number_base);
		else if (number2 + 1 < number_base)
			verif_base(base, number1, number2 + 2, number_base);
		else if (number1 < number_base)
			verif_base(base, number1 + 1, 0, number_base);
}
void ft_putnbr_base1(int nbr, char *base, int number_base)
{
	if (nbr != 0)
		ft_putnbr_base1(nbr/number_base, base, number_base);

	if (nbr % number_base > 0)
		ft_putchar(base[(nbr % number_base) -1]);
	else if (nbr != 0)
		ft_putchar('0');
}

void ft_putnbr_base(int nbr, char *base)
{
	int number_base;

	number_base = 0;
	while (base[number_base] != '\0')
	{
		number_base++;
	}
	number_base++;
	//printf("la base est = %i\n", number_base);
	verif_base(base, 0, 1, number_base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	ft_putnbr_base1(nbr, base, number_base);
}