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
	char m;

	m = 48;
	c = 48;
	d = 48;
	u = 49;

	while (m < (58))
	{
		while (c < (58))
		{
			while (d < (58))
			{
				while(u < (58))
				{
					ft_putchar(m);
					ft_putchar(c);
					ft_putchar(' ');
					ft_putchar(d);
					ft_putchar(u);
					ft_putchar(',');
					ft_putchar(' ');
					u++;
					if (u == c) 
					{
						if (d == m) 
						{
							u++;
						}
					}
				}
				u = c + 1;
				d++	;
				if (u == c)
					if (d == m)
						d++;
			}
			d = m;
			c++;
			if (u == c) 
				if (d == m) 
					u++;
		}
		c = 48;
		m++;
		if (u == c)
			if (d == m)
				u++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
