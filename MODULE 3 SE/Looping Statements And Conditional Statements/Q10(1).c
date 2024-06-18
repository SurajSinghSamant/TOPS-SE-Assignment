// Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans : 5)
#include<stdio.h>
int main()
{
    int num, sum;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    int digit1 = num % 10;
    if(num<0) {
        num = -num;
    }
    while(num >= 10){
        num = num / 10;
    }
    int digit2 = num;
    sum = digit1 + digit2;
    printf("Summation Of First And Last Digit is %d\n",sum);

    return 0;
}
