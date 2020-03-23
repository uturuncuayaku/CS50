/**
 * CS-50 Harvard online
 * Greedy Algorithm
 * Problem Set 1
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int makeChange(float c)
{
	int coins = 0;
	int count = 0;

	if (c > .99)
		return((int)c);
	
		while(c >= .25)
		{
			c -= .25;
			count++;
		}
		while(c >= .10)
		{
			c -= .10;
			count++;
		}
		while(c >= .5)
		{
			c -= .5;
			count++;
		}
		while(c)
		{
			c--;
			count++;
		}
	
	return (count);
}

int isValid(float n)
{

	if(isdigit(n) && !(n > 0))
		return 1;
	else
		return 0;
}

int main(void)
{
	float change;
	do{
	printf("%s","Changed owed: ");
	change = 0.0;
	scanf("%f",&change);
	}while(change < 0.0);

	printf("%d\n",makeChange(change));

	return (0);

}
