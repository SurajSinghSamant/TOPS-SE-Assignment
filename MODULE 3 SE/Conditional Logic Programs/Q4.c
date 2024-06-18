/* WAP to make simple calculator (operation include Addition,
 Subtraction, Multiplication, Division, modulo) using conditional
 statement */
#include<stdio.h>

int main()
{
    int num1,num2 ;
    char op;
    printf("+ For Additon\n");
    printf("- For Subtraction\n");
    printf("/ For Division\n");
    printf("* For Multiplication\n");
    printf("%% For Modulo\n");
    printf("----------------------------\n");
    
    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter Operator : ");
    scanf(" %c",&op);
    
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    printf("\n----------------------------\n");
    
    switch (op) 
    {
    case '+':
        printf("The Sum Of %d And %d Is : %d\n",num1,num2,num1+num2);
        break;
        
    case '-':
        printf("The Subtraction Of %d And %d Is : %d\n",num1,num2,num1-num2);
        break;
            
    case '/':
        printf("The Division Of %d And %d Is : %d\n",num1,num2,num1/num2);
        break;
    case '*':
        printf("The Multipliction Of %d And %d Is : %d\n",num1,num2,num1*num2);
        break;
            
    case '%':
        printf("The Modulo Of %d And %d Is : %d\n",num1,num2,num1%num2);
        break;
            
        default:
        printf("Enter The Valid Operator ! ");
}
    return 0;
}
