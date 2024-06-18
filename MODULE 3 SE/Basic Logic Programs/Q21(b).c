//without using 3rd variable
#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter Value Of Number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter Value Of Number 2 : ");
    scanf("%d",&num2);

    //logic
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Number 1 : %d\nNumber 2 : %d\n",num1,num2);


    return 0;
}
