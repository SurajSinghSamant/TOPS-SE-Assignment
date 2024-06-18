//  Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>

int main()
{
    int transaction, return_amount;
    
    printf("Enter The Transaction Amount : ");
    scanf("%d",&transaction);
    
    printf("Enter The Return Amount : ");
    scanf("%d",&return_amount);
    
    if(transaction > return_amount) {
        printf("You Are In Loss\n");
    }
    else {
        printf("You Are In Profit\n");
    }
    
    return 0;
}
