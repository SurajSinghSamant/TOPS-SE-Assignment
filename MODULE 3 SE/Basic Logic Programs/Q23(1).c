/* sWAP to calculate swap 2 numbers with using of multiplication and
division */
#include<stdio.h>

int main()

{
    int num1, num2;

    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter Number 2 : ");
    scanf("%d",&num2);

    //logic
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("New Value After Swap Number 1 : %d",num1);
    printf("\nNew Value After Swap Number 2 : %d\n",num2);
    
    return 0;
}
