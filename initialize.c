#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
   /* Get user input */
   char name[] = GetString();
   char *token;
   
   /* Split the string at first space */
   token = strtok(name, " ");
   
   /* Keep spliting until there is nothing to split */
   while(token != NULL) 
   {
      /* Print the first part splitted */
      printf("%c", toupper(token[0]));
      
      /* Split the remaining */
      token = strtok(NULL, " ");
   }
   printf("\n");
}
