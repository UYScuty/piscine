#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_fibonacci1(int index, int resultat, int v, int avt)
{
	if (index > 0)
	{
		if (avt == 0)
		{
			avt = v + resultat;
			resultat = v;
			v = 0;
		}
		else
		{
			v = avt + resultat;
			resultat = avt;
			avt = 0;
		}
		ft_fibonacci1(index - 1, resultat, v, avt);
	}
	else if (index == 0)
		return(resultat);
}
int ft_fibonacci(int index)
{
	int resultat;
	int v;
	int avt;

	if (index < 0)
		return (-1);

	avt = 0;
	v = 0;
	resultat = 1;
	resultat = ft_fibonacci1(index, resultat, v, avt);
	return (resultat);
}
int main(int argc, char *argv[])
{
	int resultat;

	resultat = ft_fibonacci(atoi(argv[1]));
	printf("%i\n", resultat);
	return 0;
}