#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_putstr(char *str);

void ft_putlen(int *str, int max_range)
{
	while(max_range >= 0)
	{
		printf(" %i ", str[max_range]);
		max_range--;
	}
}

int ft_strlen(char *str)
{
	int number;

	number = 0;
	while(str[number] != '\0')
		number++;
	return(number);
}
int verif(char c, char *charset)
{
	int curseur;

	curseur = (ft_strlen(charset))-1;
	while (curseur >= 0)
	{
		if (c == charset[curseur])
			return (0);
		else
			curseur--;
	}
	return(1);
}
int tab_des_nombres(char *str, char *charset, int *superint)
{
	while (str[superint[0]] != '\0')
	{
		while (verif(str[superint[0]], charset) != 0 && (str[superint[0]] != '\0'))
		{
			//printf("verif = %i", (verif(str[superint[0]], charset)));
				superint[0]++;
			//printf(", superint[0] = %i\n", superint[0]);
		}
		printf("changement = mini\n");
		while (verif(str[superint[0]], charset) == 0 && (str[superint[0]] != '\0'))
		{
			//printf("verif = %i", (verif(str[superint[0]], charset)));
				superint[0]++;
			//printf(", superint[0] = %i\n", superint[0]);
		}
		superint[3]++;
		printf("changement = grand\n");
	}
	return superint[3];
}

char **number_splity(char *str, char *charset, char **split, int *superint)
{
	while (str[superint[0]] != '\0')
	{
		while (verif(str[superint[0]], charset) != 0 && (str[superint[0]] != '\0'))
		{
			superint[2]++;
			superint[0]++;
		}
		split[superint[3]] = malloc(sizeof(*split) * (superint[2] + 1));
		split[superint[3]][superint[2]] = '\0';
		superint[2] = 0;
		while (verif(str[superint[0]], charset) == 0 && (str[superint[0]] != '\0'))
		{
			superint[0]++;
		}
		superint[3]++;
	printf("changement = grand\n");
	}
	superint[3] = 0;
	superint[0] = 0;
	while (str[superint[0]] != '\0')
	{
		while (verif(str[superint[0]], charset) != 0 && (str[superint[0]] != '\0'))
		{
			superint[2]++;
			(split[superint[3]])[superint[2] - 1] = str[superint[0]];
			superint[0]++;
			printf("superint[2] = %i superint[3] = %i\n", superint[2], superint[3]);
			printf("pass\n");
		}
		superint[2] = 0;
		while (verif(str[superint[0]], charset) == 0 && (str[superint[0]] != '\0'))
		{
			superint[0]++;
		}
		superint[3]++;
	}
	return(split);
}
char **ft_split(char *str, char *charset)
{
	int *superint;
	char **split;
	superint = malloc(sizeof(*superint)*5);
	// superint[0] = cuseur
	// superint[1] = nombre_de_ft_tab
	// superint[2] = nombre pour fonction number_splity
	// superint[3] = un int 
	// superint[4] = mode de la fonction numer_splity
	superint[0] = 0;
	superint[2] = 0;
	superint[3] = 0;
	superint[4] = 1;
	superint[1] = tab_des_nombres(str, charset, superint);
	printf("%i\n", superint[1]);
	split = malloc(sizeof(split) * (superint[1]));
	superint[1]--;
	superint[0] = 0;
	superint[2] = 0;
	superint[3] = 0;
	superint[4] = 1;
	printf("mumber_splity\n");
	**split = number_splity(str, charset, split, superint);
	return(split);
}
int main(void)
{
	char **o;
	o = ft_split("gf sdki thn\0"," \0");
	return 0;
}