#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

/* Caesar Chiper */
int main(int argc, string argv[])
{
    /* Check if there is exactly 2 arguments */
    if (argc == 2)
    {
        /* Key */
        int k = atoi(argv[1]);
        
        /* Get user input */
        char * str = GetString();
        for(int i = 0, n = strlen(str); i < n; i++)
        {
            /* Crypt uppercase characters */
            if (isalpha(str[i]) && isupper(str[i]))
            {   
                printf("%c", ((str[i] - 65 + k) % 26) + 65);
            }
                /* Crypt lowercase characters */
            else if(isalpha(str[i]) && islower(str[i]))
            {   
                printf("%c", ((str[i] - 97 + k) % 26) + 97); 
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
    else
    {
        printf("You must enter one argument.\n");
        return 1;
    }
}
