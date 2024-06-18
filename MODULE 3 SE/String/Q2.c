//Write a program in C to separate individual characters from a string.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100]; /* Declares a string of size 100 */
    int l= 0;
    
       printf("\n\nSeparate The Individual Characters From A String \n");
       printf("------------------------------------------------------\n");
       printf("Input The String : ");
       //scanf("%s",&str);
       fgets(str, sizeof str, stdin);
       printf("The Characters Of The String Are : \n");
    while(str[l]!='\0')
    {
       printf("%c\n", str[l]);
       l++;
    }
    printf("\n");
    
    return 0;
}

