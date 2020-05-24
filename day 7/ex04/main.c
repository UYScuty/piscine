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
char *ft_concat_params(int argc, char *argv[])
{
	char *u;
	int number;
	int jack;
	number = argc;
	argc--;
	jack = argc;
	while (jack >= 0)
	{
		number = number + ft_strlen(argv[argc]);
		jack --;
	}
	u = malloc(sizeof(u) * (number + 1));
	jack = argc;
	u[number] = '\n';
	number--;
	while (jack >= 0)
	{
		argc = ft_strlen(argv[jack]) - 1;
		while (argc >= 0)
		{
			u[number] = argv[jack][argc];
			//printf("number  = %i jack = %i argc = %i /// %c = %c \n", number, jack, argc, u[number], argv[jack][argc]);
			//printf("%c", 111);

			argc--;
			number--;
		}
		u[number] = ' ';
		number--;
		jack--;
	}

}
void nombre_in_table2(char *str, int *nombre_in_table)
{
	int table;
	int number;
	int cuseur;

	number = 0;
	cuseur = 0;
	while (str[cuseur] != '\0')
	{
		if (str[cuseur] == ' ' || str[cuseur] == '\n')
		{
			if (str[cuseur - 1] == ' ' || str[cuseur - 1] == '\n')
				number = number;
			else if (str[cuseur -1] != '\t')
				number++;	
		}
		else if (str[cuseur] == '\t')
		{
			if (str[cuseur - 1] == ' ' || str[cuseur - 1] == '\n')
				number = number;
			else if (str[cuseur -1] != '\t')
				number++;
		}
		else
		{
			printf("%i\n", number);
			ft_putlen(nombre_in_table, 4);
			nombre_in_table[number] = nombre_in_table[number] + 1;
		}
		cuseur++;
	}
}
int nombre_of_table(char *str)
{
	int number;
	int cuseur;

	number = 0;
	cuseur = 0;
	while (str[cuseur] != '\0')
	{
		if (str[cuseur] == ' ' || str[cuseur] == '\n')
			if (str[cuseur - 1] == ' ' || str[cuseur - 1] == '\n')
				number = number;
			else if (str[cuseur -1] != '	')
				number++;
		if (str[cuseur] == '	')
			if (str[cuseur - 1] == ' ' || str[cuseur - 1] == '\n')
				number = number;
			else if (str[cuseur -1] != '	')
				number++;
		cuseur++;
	}
	return(number);

}
char** ft_split_whitespaces(char *str, int *u)
{
	char** table;
	int nb_table;
	int *nb_in_table;
	int longeur;

	longeur = ft_strlen(str);
	nb_table = nombre_of_table(str) + 1;
	printf(" PREMIER PRINT = NB_TABLE = %i\n", nb_table);
	table = malloc(sizeof(table)*nb_table);
	nb_in_table = malloc(sizeof(nb_in_table)*nb_table);
	nb_table--;
	nombre_in_table2(str, nb_in_table);
	ft_putlen(nb_in_table, nb_table);
	while(nb_table >= 0)
	{
		table[nb_table] = malloc(sizeof(*table) * (nb_in_table[nb_table] + 1));
		//printf("(*table)[nb_table] = %c\n", (*table)[nb_table]);
		//printf("nb_in_table[nb_table] = %i avec nb_table = %i\n", nb_in_table[nb_table], nb_table);
		while (nb_in_table[nb_table] >= 1)
		{
			//printf(" PRINT = NB_TABLE = %i\n", nb_table);
			if (str[longeur] != ' ' || str[longeur] != '\n')
				if (str[longeur] != '	')
				{
					(*table)[nb_table] = str[longeur];
					printf("%c %c\n", ((*table)[nb_table]), (str[longeur]));
					nb_in_table[nb_table]--;
				}
			else
				//printf("NOP NOP NOP\n");
			longeur--;
		}
		nb_table--;
	}
	return(table);
}


int main(int argc, char *argv[])
{
	int u;
	char **i;
	char *o = "hhhhh hhhh hhh hh h";

	u = 0;

	ft_putstr(o);
	printf("GO NEXT\n");
	i = ft_split_whitespaces(o, &u);
	ft_putstr(i[0]);

	o = ft_concat_params(u, i);
	ft_putstr(o);

	return 0;
}