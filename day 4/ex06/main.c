#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int ft_is_prime1(int super1, int super2, int nb)
{
	if (super2 * super1 == nb)
		return(0);
	else if (super2 == nb-1)
		return(1);
	else if (super1 == nb-1)
	{
		super1 = 1;
		ft_is_prime1(super1, super2 + 1, nb);
	}
	else
		ft_is_prime1(super1 + 1, super2, nb);


}
int ft_is_prime(int nb)
{
	int super1;
	int super2;
	int resultat;

	super1 = 1;
	super2 = 1;
	resultat = ft_is_prime1(super1, super2, nb);
	return(resultat);

}
int main(int argc, char *argv[])
{
	int resultat;

	resultat = ft_is_prime(atoi(argv[1]));
	printf("%i\n", resultat);
	return 0;
}