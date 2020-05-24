#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str);
void verif_base(char *base, int number1, int number2, int number_base);
void ft_putnbr_base1(int nbr, char *base, int number_base);
void ft_putnbr_base(int nbr, char *base);

int ft_strlen(char *str)
{
	char number;

	number = 0;
	while(str[number] != 0)
		number++;
	return number;
}
int multiply_nomber_by(int curseur, int multiplicateur, int multimax)
{
	int nombre;

	nombre = 0;
	if (curseur == 0)
		return(nombre);
	while (curseur > 0)
	{
		nombre = (multiplicateur * multimax);
		curseur = curseur + 1;
	}
	return(nombre);
}
int base_to_int(char *nbr, char *base_from)
{
	int *superint;
	int curseur_nbr;
	superint = malloc(sizeof(superint) * 5);
	curseur_nbr = 0; //curseur nbr
	superint[1] = 0; //curseur base
	superint[2] = 0; //nombre
	superint[3] = ft_strlen(base_from);
	superint[4] = ft_strlen(nbr);
	//printf("fin de strlen = %i\n", superint[3]);

	while(curseur_nbr < ft_strlen(nbr))
	{
		while (base_from[superint[1]] != nbr[curseur_nbr])
		{
			superint[1] = superint[1] + 1;
		}
		superint[1] = superint[1] + 1;
		superint[2] = superint[2] + multiply_nomber_by(curseur_nbr, superint[1], superint[3]);
		curseur_nbr++;
		superint[1] = 0;
	}
	printf("%i\n", superint[2]);
	return(superint[2]);
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int int_nombre;
	int_nombre = base_to_int(nbr, base_from);
	ft_putnbr_base(int_nombre, base_to);

}
int main(int argc, char *argv[])
{
	char *base;
	ft_convert_base("hhhiii\0", "fhi\0", "omlk\0");
	return 0;
}