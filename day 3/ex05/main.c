#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int number;

	number = 0;
	while(str[number] != 0)
	{
		ft_putchar(str[number]);
		number++;
	}
}

int main()
{
	char *o;
	o = "jean charle aime manger";
	ft_putstr(o);
	return 0;
}