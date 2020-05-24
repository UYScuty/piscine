#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_recursive_power1(int nb, int power, int resultat)
{
	if (power > 0)
	{
		resultat = resultat * nb;
		ft_recursive_power1(nb, power - 1, resultat);
	}
	else 
		return(resultat);
}
int ft_recursive_power(int nb, int power)
{
	int resultat;
	resultat = ft_recursive_power1(nb, power - 1, nb);
	return (resultat);
}
int main(int argc, char *argv[])
{
	int i;
	int power;
	int u;

	power = atoi(argv[2]);
	u = atoi(argv[1]);
	i = ft_recursive_power(u, power);
	printf("%i puissance %i = %i\n", u, power, i);
	return 0;
}