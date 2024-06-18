// Write a program make a summation of given number (E.g., 1523 Ans: 11
#include<stdio.h>

int main() 
{
    int num, sum = 0;
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    if(num<0) {
        num = -num;
    }
    while(num>0) {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    
    printf("Total Of Numbers Is %d\n",sum);
    
    return 0;
}
