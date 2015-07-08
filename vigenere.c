#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Vigenère's Chiper */
int main()
{
	/* Check if there is exactly 2 arguments */
	
	/* Key */
	char * k = "abc";
	
	/* Get user input */
	char * str = "aaaa";
	int i, j, n, m, mod;
	for(i = 0, n = strlen(str); i < n; i++)
	{
		m = strlen(k);
		mod = i % m;
			
		/* Crypt uppercase characters */
		if (isalpha(str[i]) && isupper(str[i]))
		{
			printf("%c", ((str[i] - 65 + k[mod]) % 26) + 65);
		}
		/* Crypt lowercase characters */
		else if(isalpha(str[i]) && islower(str[i]))
		{
			printf("%c", ((str[i] - 97 + k[mod] - 97) % 26) + 97);
		}
		/* Print non-alpha characters without crypting */
		else
		{
			printf("%c", str[i]);
		}
		
	}
	printf("\n");
	return 0;
	
}
