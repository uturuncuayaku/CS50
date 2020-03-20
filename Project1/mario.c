#include <cs50.h>
#include <stdio.h>
int main(void)
{
	printf("Mario\n");
	int height = 10;

	for(int i=0; i < height; i++)
	{
		for(int j= 0; j < height - i; j++)
			printf(" ");
		for(int k = 0; k < i + 1; k++)
			printf("#");
		for(int l = 0; l < 2; l++)
			putchar(' ');
		for(int o = 0; o <= i;o++)
			putchar('#');
		printf("\n");

	}

	return (0);
}
