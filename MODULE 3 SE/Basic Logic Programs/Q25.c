//Accept 5 expense from user and find average of expense
#include<stdio.h>

int main()
{
    int exp1, exp2, exp3, exp4, exp5, sum;
    float avg;
    
    printf("Enter Expenses : ");
    scanf("%d%d%d%d%d", &exp1, &exp2, &exp3, &exp4, &exp5);
    
    sum = exp1 + exp2 + exp3 + exp4 + exp5;
    avg=sum/5;
    
    printf("The Average Expense Is : %.2f\n",avg);
    printf("The Average Expense Is : %.2f\n",avg);
    
    return 0;
}
