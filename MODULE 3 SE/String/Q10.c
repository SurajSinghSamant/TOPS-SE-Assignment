// Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char string[1000], sub[1000];
   int position, length, c = 0;
 
   printf("Input A String : ");
    fgets(string, sizeof string, stdin);
 
   printf("Enter The Position And Length Of Substring : ");
   scanf("%d%d", &position, &length);
     
   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required Substring Is \"%s\"\n", sub);
 
   return 0;
}
