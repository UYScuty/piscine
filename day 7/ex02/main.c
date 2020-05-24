#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_range(int **tab, int min, int max)
{
	int time; 
	int o;
	int *tmp;

	if (min > max)
		return(0);
	time = max - min;
	o = 0;
	*tab = (int*)malloc(sizeof(int) * (time));
	time--;
	max--;
	while (o <= time)
	{
		(*tab)[o] = max;
		//printf("le tableau numéro %i vaut %d = %i\n",time, *tab[o], max);
		//printf("le tableau numéro %i vaut = %i\n",time, max);
		max--;
		o++;
	}
 return(time);
}
int main(int argc, char *argv[])
{
	int *h;
	int u;
	int i;

	i = ft_range(&h, atoi(argv[1]), atoi(argv[2]));

	u = atoi(argv[2]) - atoi(argv[1]);
	u--;
	while (u >= 0)
	{
		printf("%d\n", h[u]);
		u--;
	}
	return 0;
}