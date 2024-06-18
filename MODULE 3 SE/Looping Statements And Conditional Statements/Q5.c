// WAP to print factorial of given number
#include <stdio.h>

int main()
{
    int i, num, fact = 1;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    for (i=1; i<=num; i++)
    {
        fact = fact * i;
    }
     printf("The Factorial Is : %d\n",fact);
    
    return 0;
}
