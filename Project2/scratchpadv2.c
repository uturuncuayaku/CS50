#include <math.h>
#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 1000

int main()
{
	FILE *fp;
	char str[MAXCHAR];
	char *filename = "analyze.in";
	char *ptr;
	fp  = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Could not open file %s", filename);
		return (1);
	}
	fscanf(fp, "%[^\n]", str);
	fclose(fp);
	
	ptr = str;
	
	int sentence = 0, word = 0, letter = 0;

	while(*ptr++){
		if(isalpha(*ptr))
			letter++;
		if(*ptr == '.' || *ptr == '?' || *ptr == '!')
			sentence++;
		if(*ptr == ' ')
			word++;	
	}
	printf("%d = letter, %d = sent, %d = words\n", letter, sentence, word);

	float c_l_i = 0.0;
	// L = Letters ÷ Words × 100
	// S = Sentences ÷ Words × 100
	float L = ((float)letter / (float)word) * 100.0;
	float S = ((float)sentence / (float)word) * 100.0;

	c_l_i = (0.0588 * L) - (0.296 * S) - 15.8;

	printf("Coleman-Liau Index calculated for analyze.in: %f\n", round(c_l_i));
	putchar('\n');
	return (0);


}
