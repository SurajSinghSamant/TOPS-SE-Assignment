/* Write a program to find out the max from given number (E.g., No: -
1562 Max number is 6) */
#include <stdio.h>

int main()
{
    int num, max = -1;
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    if(num<0) {
        num = -num;
    }
    while(num>0) {
        int digit = num % 10;
        if(digit>max) {
            max = digit;
        }
        num = num / 10;
    }
    
    if(max == -1) {
        printf("Not The Max Digit\n");
    }
    else{
        printf("%d Is The Max Digit\n",max);
    }
}
