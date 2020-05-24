#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void write_your_char(int *horizontale)
{
	int number;

	number = 0;
	while (number < 8)
	{
		ft_putchar(horizontale[number] + '0');
		number++;
	}
	ft_putchar('\n');
}
int clear(int *horizontale, int nb)
{
	//printf("%i\n", nb);
	horizontale[nb + 1]++;
	while (nb >= 0)
	{
		horizontale[nb] = 1;
		nb--;
	}
}


int verif(int *horizontale, int ho1, int ho2)
{
	if (horizontale[ho2] == horizontale[ho1])
		return(0);
	if (ho2 > ho1)
		if (horizontale[ho2]-(ho2 - ho1) == horizontale[ho1] || horizontale[ho2]+(ho2 - ho1) == horizontale[ho1])
			return(0);
	if (ho2 < 7)
			verif(horizontale, ho1, ho2 + 1);
	else
		if (ho1 < 6)
			verif(horizontale, ho1 + 1, ho1 + 2);
		else
		{
			write_your_char(horizontale);
			return(1);
		}
}
int ft_eight_queens_puzzle1(int resultat, int *horizontale)
{
	while (horizontale[7] <= 8)
	{	
		resultat += verif(horizontale, 0, 1);
		if (horizontale[0] < 8)
			horizontale[0]++;
		else if (horizontale[1] < 8)
			{
				horizontale [0] = 1;
				horizontale[1]++;
			}

		else if (horizontale[2] < 8)
			clear(horizontale, 1);

		else if (horizontale[3] < 8)
			clear(horizontale, 2);

		else if (horizontale[4] < 8)
			clear(horizontale, 3);

		else if (horizontale[5] < 8)
			clear(horizontale, 4);

		else if (horizontale[6] < 8)
			clear(horizontale, 5);

		else if (horizontale[7] < 8)
			clear(horizontale, 6);
		else if (horizontale[7] == 8 && horizontale[6] == 8)
			if (horizontale[5] == 8 && horizontale[4] == 8)
				if (horizontale[3] == 8 && horizontale[2] == 8)
					if(horizontale[1] == 8 && horizontale[0] == 8)
						return(resultat);
	}
	return(resultat);
}
int ft_eight_queens_puzzle(void)
{
	int horizontale[8];
	int tour;

	tour = 7;
	while (tour >= 0)
	{
		horizontale[tour] = 1;
		tour--;
	}
	return(ft_eight_queens_puzzle1(0, horizontale));
}
int main(int argc, char *argv[])
{
	int resultat;

	resultat = ft_eight_queens_puzzle();
	printf("%i\n", resultat);
	return 0;
}