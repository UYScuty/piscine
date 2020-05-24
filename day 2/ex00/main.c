#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char nombre;
	char lettre;

	nombre = 26;
	lettre = 97;
	while(nombre > 0)
	{
		nombre = nombre - 1;
		ft_putchar(lettre);
		lettre = lettre + 1;
	}
	ft_putchar('\n');
	
}

int main(void)
{
	ft_print_alphabet();
	return(0);
}
