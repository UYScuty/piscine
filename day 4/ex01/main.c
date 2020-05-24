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
int ft_recursive_factorial1(int nb, int result)
{
	if (nb > 0)
	{
		result = result * nb;
		ft_recursive_factorial1(nb -1, result);
	}
	else
		return(result);
}
int ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	result = ft_recursive_factorial1(nb, result);
	return(result);
}

int main(int argc, char *argv[])
{
	int i;

	i = ft_recursive_factorial(ft_atoi(argv[1]));
	printf("le factoriel de %s est = %i\n",argv[1], i);
	return 0;
}