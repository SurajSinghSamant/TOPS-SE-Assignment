//WAP to check if the given year is a leap year or not.
#include<stdio.h>

int main()
{
    int year;
    printf("Enter The Year : ");
    scanf("%d",&year);
    
    if(year%4==0 && year%100!=0 || year%400==0) {
        printf("%d Is Leap A Year\n",year);
    }
    else{
        printf("%d Is Not A Leap Year\n",year);
    }
    return 0;
}
