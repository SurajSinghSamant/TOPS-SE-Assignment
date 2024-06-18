//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char str[100];
  int ctr, ch, i;

       printf("\n\nReplace Lowercase Characters By Uppercase And Vice-Versa  \n");
       printf("--------------------------------------------------------------\n");

       printf("Input The String : ");
       fgets(str, sizeof str, stdin);

  i=strlen(str);

  ctr = i; /*shows the number of chars accepted in a sentence*/

  printf("\nThe Given Sentence Is : %s",str);

  printf("After Case Changed The String Is : ");
  for(i=0; i < ctr; i++)
  {
    ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    putchar(ch);
   }
   printf("\n\n");
    
    return 0;

}
