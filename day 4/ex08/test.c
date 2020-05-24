#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int N = 4;

void print_queens(int *tab)
{
	int i = 0;
	while(i < N)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("%s", "\n");
}

int verif(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (tab[i] == tab[n])
			return(0);
		if ((n - i) == (tab[n] - tab[i]) || (n - i) == (tab[i] - tab[n]))
			return (0);
		i++;
	}
	return (1);
}

void	eight_queens2(int n, int *resultat, int *tab)
{
	int i = 0;

	if (n == N)
	{
		print_queens(tab);
		*(resultat) = *(resultat) + 1;
	}
	else
	{
		while (i < N)
		{
			tab[n] = i;
			if (verif(tab, n))
				eight_queens2(n+1, resultat, tab);
			i++;
		}
	} 
}
void	eight_queens(void)
{
	int tab[N];
	int resultat;

	resultat = 0;
	eight_queens2(0, &resultat, tab);
	printf("%d resultats trouvés\n", resultat);
}
int main(int argc, char *argv[])
{
	int resultat;

	eight_queens();
	return 0;
}