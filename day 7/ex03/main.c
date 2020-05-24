#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_putstr(char *str);

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
		u[number] = '\n';
		number--;
		jack--;
	}


}
int main(int argc, char *argv[])
{
	char *i;

	i = ft_concat_params(argc, argv);
	//printf("salut\n");
	ft_putstr(&i[0]);
	return 0;
}