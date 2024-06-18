//Write a program in C to find the length of a string without using library functions.
#include <stdio.h>
int main()
{
   //Initializing variable.
    char str[100];
    int i, length=0;
    
     //Accepting input.
    printf("Enter A String : ");
    scanf("%s",str);

     //Initializing for loop.
    for(i=0; str[i]!='\0'; i++)
    {
        length++; //Counting the length.
    }
    
    printf("\nLength Of Input String : %d\n",length);
    
     return 0;
}


