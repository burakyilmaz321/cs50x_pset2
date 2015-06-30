#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

void initialize(char str[]);

int main(void)
{
   /* Get user input */
   char name[] = GetString();
   
   /* Call the initializing function with the name user gave */
   initialize(name);
}

/* Define the initializing function */
void initialize(char str[])
{
   char *token;
   
   /* Split the string at the first space */
   token = strtok(str, " ");
   
   /* Keep spliting until there is nothing to split */
   while(token != NULL) 
   {
      /* Print first letter of splitted part */
      printf("%c", toupper(token[0]));
      
      /* Split the remaining */
      token = strtok(NULL, " ");
   }
   printf("\n");
}
