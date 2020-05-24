#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int **********nbr)
{
	int p;

	p = **********nbr;
	printf("popopo =%i\n", p);
}

int main()
{
	int u;
	int *u1;
	int **u2;
	int ***u3;
	int ****u4;
	int *****u5;
	int ******u6;
	int *******u7;
	int ********u8;
	int *********u9;

	u = 42;
	u1 = &u;
	u2 = &u1;
	u3 = &u2;
	u4 = &u3;
	u5 = &u4;
	u6 = &u5;
	u7 = &u6;
	u8 = &u7;
	u9 = &u8;
	ft_ft(&u9);
	return 0;
}