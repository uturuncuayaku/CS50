#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char c[1000];
	FILE *fptr;

	if((fptr = fopen("program.txt", "r")) == NULL)
	{
		printf("Error! Opening file.");
		exit(1);
	}
	fscanf(fptr, "%[^\n]", c);
	printf("Data from file: \n%s", c);
	fclose(fptr);

	return (0);
}
