#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_strlen(char *str)
{
	char number;

	number = 0;
	while(str[number] != 0)
		number++;
	
	printf("%d\n", number);
}

int main()
{
	char *o;
	o = "dd";
	ft_strlen(o);
	return 0;

}