#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_strlen(char *str)
{
	char number;

	number = 0;
	while(str[number] != 0)
		number++;
}
