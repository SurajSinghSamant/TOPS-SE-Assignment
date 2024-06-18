// Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
#include<stdlib.h>

int compare(char[],char[]);
int main()
{
   char str1[20]; // declaration of char array
   char str2[20]; // declaration of char array
   printf("Enter The First String : ");
    fgets(str1,sizeof str1,stdin);
   printf("Enter The Second String : ");
   fgets(str2,sizeof str2,stdin);
   int c = compare(str1,str2); // calling compare() function
   if(c == 0)
   printf("Strings Are Same");
   else
   printf("Strings Are Not Same");
  
    return 0;
}
//0 1 2 3 4
// Comparing both the strings.
int compare(char a[],char b[])
{
    int flag=0,i=0;  // integer variables declaration
    while(a[i]!='\0' &&b[i]!='\0')  // while loop
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
    
    
    return 0;
}
