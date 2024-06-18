// Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    char s[200];
    int count = 1, i;
 
    printf("Enter The String : ");
    fgets(s, sizeof s, stdin);
    //janvi  desai
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("Number Of Words In Given String Are : %d\n", count);
    
    return 0;
}
