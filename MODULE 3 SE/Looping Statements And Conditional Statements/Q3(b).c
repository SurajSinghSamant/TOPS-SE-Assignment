//WAP to take 10 no. Input from user and find out how many odd numbers are there
#include <stdio.h>

int main()
{
    int i ,num;
    
    for(i=1;i<=10;i++)
    {
        printf("Enter The Number : ");
        scanf("%d",&num);

        if(num % 2 != 0) {
            printf("%d Is Odd\n",num);
        }
    }

}
