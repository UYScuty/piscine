#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	int o;

	o = 1;
	printf("%i\n", argc);
	while (o < argc)
	{
		ft_putstr(argv[o]);
		ft_putstr("\n");
		o++;
	}
	return 0;
}