#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = nb;
	while (power > 0)
	{
		if (power > 0)
			resultat = resultat * nb;
		power--;
		//printf("%i = %i*%i\n", resultat, (resultat/nb), nb);
	}
	return (resultat);
}
int main(int argc, char *argv[])
{
	int i;
	int power;
	int u;

	power = atoi(argv[2]);
	u = atoi(argv[1]);
	i = ft_iterative_power(u, power);

	printf("%i\n", argc);
	printf("%i puissance %i = %i\n", u, power, i);
	return 0;
}