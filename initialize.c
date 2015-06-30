#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[] = "robert thomas bowden";
   const char s[] = " ";
   char *token;
   
   
   token = strtok(str, s);
   
   
   while( token != NULL ) 
   {
      printf( "%c", toupper(token[0]) );
    
      token = strtok(str, s);
   }
   printf("\n");
}
