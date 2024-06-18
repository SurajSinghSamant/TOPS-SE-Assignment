//using 3rd variable
#include<stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter Value of Number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter Value of Number 2 : ");
    scanf("%d",&num2);

    //logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Number 1 : %d\nNumber 2 : %d\n",num1,num2);

    return 0;
}
