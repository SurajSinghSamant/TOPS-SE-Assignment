// WAP to take 10 no. Input from user and find out sum of odd numbers
#include <stdio.h>

int main()
{
    int i, num, sum = 0;
    
    for(i=1; i<=10; i++)
    {
        printf("Enter The Number : ");
        scanf("%d",&num);
        if(num % 2 != 0) {
            sum = sum + num;
        }
    }

printf("The Sum Of Odd Number Is : %d\n",sum);

}
