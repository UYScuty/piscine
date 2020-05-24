#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char *ft_strdup(char *src);
{
	int time;
	char *srcbis;

	time = 0;
	while (src[time] != '\0')
		time ++;
	srcbis = (char*)malloc(sizeof(*src) * (time + 1));
	while (i >= 0)
	{
		srcbis[time] = src[time];
		time--;
	} 
}
int main(int argc, char *argv[])
{
	

	ft_strdup(argv[1]);
	printf("le factoriel de %s est = %i\n",argv[1], i);
	return 0;
}