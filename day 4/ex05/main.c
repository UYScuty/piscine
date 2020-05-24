#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int ft_sqrt1(int stuck_nb, int nb)
{
	if (nb > 0)
		if ((nb* nb) == stuck_nb)
			return(nb);
		else
			ft_sqrt1(stuck_nb, nb -1);
	else
		return(0);
}
int ft_sqrt(int nb)
{
	int stuck_nb;
	int resultat;
	
	stuck_nb = nb;
	resultat = ft_sqrt1(stuck_nb, nb);
	return (resultat);

}
int main(int argc, char *argv[])
{
	int resultat;

	resultat = ft_sqrt(atoi(argv[1]));
	printf("%i\n", resultat);
	return 0;
}