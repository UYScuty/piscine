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
int ft_interative_factorial(int nb)
{
	int resultat;

	resultat = 1;
	while (nb > 0)
	{
		resultat = resultat * nb;
		nb--;
	}
	return(resultat);
}

int main(int argc, char *argv[])
{
	int i;

	i = ft_interative_factorial(ft_atoi(argv[1]));
	printf("le factoriel de %s est = %i\n",argv[1], i);
	return 0;
}