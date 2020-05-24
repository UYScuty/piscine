#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
{
	char c;
	char d;
	char u; 
	char f;

	c = 0;
	d = 1;
	u = 2;


	while (c != 7)
	{
		while (d != 9)
		{
			while(u != 10)
			{
				ft_putchar(c + 48);
				ft_putchar(d + 48);
				ft_putchar(u + 48);
				ft_putchar(',');
				ft_putchar(' ');
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
	}
}

int main()
{
	ft_print_comb();
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
	return 0;
}
