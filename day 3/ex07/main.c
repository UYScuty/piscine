#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_strlen(char *str)
{
	char number;
	char unid;
	
	unid = 0;
	number = 0;
	while(str[number] != 0)
		number++;
	
	char nom[number];
	number--;
	while(str[unid] != 0)
	{
		nom[unid] = str[number];
		unid++;
		number--;
	}
	number = 0;
	while(str[number] != 0)
	{
		str[number] = nom[number];
		number++;
	}
}

int main()
{
	char orange[] = "salut mn ptio";
	ft_strlen(orange);
	printf("%s", orange);
	return 0;

}