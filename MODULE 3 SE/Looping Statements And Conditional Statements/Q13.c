// calculate the Factorial of a Given Number using while loop
#include <stdio.h>

int main()
{
    int i=1, num, fact = 1;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    while (i<=num)
    {
        fact = fact * i;
        i++;
    }
    
    printf("The Factorial Is : %d\n",fact);
 
    return 0;
}
