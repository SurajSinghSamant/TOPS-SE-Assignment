// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;


       printf("\n\nCount Total Number Of Alphabets, Digits And Special Characters  \n");
       printf("--------------------------------------------------------------------\n");
       printf("Input The String : ");
       fgets(str, sizeof str, stdin);

     /* Checks each character of string*/

    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number Of Alphabets In The String Is : %d\n", alp);
    printf("Number OF Digits In The String Is : %d\n", digit);
    printf("Number Of Special Characters In The String Is : %d\n\n", splch);
    
    return 0;
}
