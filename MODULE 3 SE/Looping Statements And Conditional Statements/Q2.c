// WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
    int i ,num;
    
    for (i = 1; i<=5; i++)
    {
        printf("Enter %d Number : ",i);
        scanf("%d",&num);
        printf("The Number Is : %d\n",num);
    }
    
    return 0;
}
