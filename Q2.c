/*Write a program to make Simple calculator (to make addition,
 subtraction,multiplication, division and modulo)*/
#include<stdio.h>

int main()
{
    int Num1, Num2, Addition, Subtraction, Multiplication, Division, Modulo;
    printf("Enter Number :\t");
    scanf("%d", &Num1);
    printf("Enter Number :\t");
    scanf("%d", &Num2);
    
    Addition = Num1 + Num2;
    Subtraction = Num1 - Num2;
    Multiplication = Num1 * Num2;
    Division = Num1 / Num2;
    Modulo = Num1 % Num2;

    printf("\nAddition Of %d And %d Is %d.", Num1, Num2, Addition);
    printf("\nSubtraction Of %d And %d Is %d.", Num1, Num2, Subtraction);
    printf("\nMultiplication Of %d And %d Is %d.", Num1, Num2, Multiplication);
    printf("\nDivision Of %d And %d Is %d.", Num1, Num2, Division);
    printf("\nModulo Of %d And %d Is %d.", Num1, Num2, Modulo);
    
    return 0;
}
