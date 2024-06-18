// Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main()
{
    int i = 1, num, sum = 0;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    while (i<=num)
    {
        sum = sum + i;
        i++;
    }
    printf("The Sum Is : %d\n",sum);
    
    return 0;
}
