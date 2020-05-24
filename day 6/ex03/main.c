#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	argc--;
	while (argc > 0)
	{
		ft_putstr(argv[argc]);
		ft_putstr("\n");
		argc--;
	}
	return 0;
}