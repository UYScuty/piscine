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


int main()
{
 	char i[] = "5577885";
 	int j;
 	j = ft_atoi(i);
 	printf("resultat = %i\n", j);
	return 0;
}