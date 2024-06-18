// Write a program in C to remove characters from a string except alphabets
#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter Your String : ");
    scanf("%[^\n]",str);
    int i,j;
     for (i = 0; str[i] != '\0'; ++i) {
     while (str[i] >= '0' && str[i] <= '9') {
         for (j = i; str[j] != '\0'; ++j) {
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
   }
       printf("After Removing All Characters String Is : %s\n",str);
    
    return 0;
}
