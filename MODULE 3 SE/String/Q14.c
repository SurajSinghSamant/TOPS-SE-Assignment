// Write a program in C to combine two strings manually
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], i, j,l,m,k;
    
       printf("\n\nCombine Two Strings Manually \n");
       printf("-------------------------------------\n");

    printf("Input The First String : ");
    fgets(str1,sizeof str1,stdin);
    printf("Input The Second String : ");
    fgets(str2,sizeof str2,stdin);
    //janvi d length 5
    l=strlen(str1);
    m=strlen(str2);
    for(i=0; i<l-1; ++i);  /* value i contains reaches the end of string str1. */
    str1[i]=' ';            /* add a space with string str1. */
    i++;                  /* value i increase by 1 for the blank space */

    for(j=0; j<m-1; ++j, ++i)
    {
        str1[i]=str2[j];
    }
     k=strlen(str1);

    printf("After Combining The String Is : \n ");
    for(i=0; i<k; ++i)
    {
         printf("%c",str1[i]);
    }
printf("\n\n");
    
    return 0;
}
