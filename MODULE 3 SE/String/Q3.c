// Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100]; /* Declares a string of size 100 */
    int l,i;
    
       printf("\n\nPrint Individual Characters Of String In Reverse Order\n");
       printf("------------------------------------------------------\n");
       printf("Input The String : ");
       fgets(str, sizeof str, stdin);
       l=strlen(str);
       printf("The Characters Of The String In Reverse Are : \n");
       
       for(i=l;i>=0;i--)
        {
          printf("%c  ", str[i]);
        }
    printf("\n");
    
    return 0;
}
