// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20], str2[20];
    printf("Enter The String : ");
    gets(str1);
    printf("\nString 1 = %s", str1);
    strcpy(str2, str1);
    printf("\nString 2 = %s\n", str2);
    
    return 0;
}
