// Calculate sum of 10 numbers using of while loop
#include <stdio.h>

int main()
{
    int i, num, sum = 0;
    
    for(i=1; i<=10; i++)
    {
        printf("Enter %d Number : ",i);
        scanf("%d",&num);
        
        sum = sum + num;
    }
    printf("The Sum Of 10 Numbers Is : %d\n",sum);

    return 0;
}
