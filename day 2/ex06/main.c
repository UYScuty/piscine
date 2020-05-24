#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int tmp;
	int digit_number;

	tmp = nb;
	digit_number = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		digit_number++;
	}
	while (digit_number != 0)
	{
		printf("%d\n", digit_number);
		ft_putchar(tmp % 10);
		tmp / 10;
		digit_number = digit_number - 1;
	}
}

int main()
{
	int o;
	o = 999;
	ft_putnbr(o);
	return 0;
}