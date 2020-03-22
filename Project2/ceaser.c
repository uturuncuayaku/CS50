#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Cesar's Cypher is shifted letters by one
 * Encryption
 * E = (x + 1)mod 26
 * Decryption
 * D = (x - 1)mod 26
 * Each letter is represented from 0-25, in integer format.
 * 
 * Pseudo
 * For each character shift the ascii code by one
 */

int main(int argc, char **argv)
{

	long key;
	if(argc != 1 && !isalpha(argv[1][0]))
		key = strtol(argv[1], NULL, 10);
	else
	{
		puts("Usage: ./caesar key");
		exit(1);
	}

	char *p = malloc(sizeof(char)*100);
	char c[100];
	printf("plaintext: ");
	fgets(p,100,stdin);	
	int i;

	for(i = 0; *(p + i) != '\0'; i++)
	{
		if(isalpha(*(p+i)))
		{
			if(isupper(*(p+i)))
				c[i] = 65 +(((int)*(p+i) -65) +key)%26;
			else if(islower(*(p+i)))
				c[i] = 97 +(((int)*(p+i) -97) +key)%26;
		}
		else
			c[i] = *(p + i);
	}
	c[i] = '\0';
	printf("ciphertext: %s", c);
	return (0);
}
