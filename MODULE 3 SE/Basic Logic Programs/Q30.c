//WAP to convert years into days and days into years
#include<stdio.h>

int main()
{
    float years, days;
    printf("Enter Years : ");
    scanf("%f",&years);
    
    days = years * 365;
    printf("Total Days : %.2f\n",days);

    printf("Enter Days : ");
    scanf("%f",&days);
    
    years = days / 365;
    
    printf("Total Years : %.1f\n",years);

    return 0;
}
