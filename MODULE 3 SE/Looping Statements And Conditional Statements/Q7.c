// WAP to print number in reverse order e.g.: number = 64728 --->  reverse = 82746
#include<stdio.h>

int main()
{
    int num, rem, rev = 0 ;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    printf("%d Is Reverse\n",rev);

}
