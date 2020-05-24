#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int time; 
	int *tab;

	time = max - min;

	tab = malloc(sizeof(tab) * (time));
	time--;
	while (time >= 0)
	{
		tab[time] = min;
		printf("le tableau numéro %i vaut %d = %i\n",time, tab[time], min);
		min++;
		time--;
	} 
 return(tab);
}
int main(int argc, char *argv[])
{
	int *h;
	int u;

	h = ft_range(atoi(argv[1]), atoi(argv[2]));

	u = atoi(argv[2]) - atoi(argv[1]);
	u--;
	while (u >= 0)
	{
		printf("%d\n", h[u]);
		u--;
	}
	return 0;
}