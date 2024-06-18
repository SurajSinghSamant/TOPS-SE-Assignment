/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include <stdio.h>
#include <math.h>

int main() 
{
    float principal, rate, time, amount, CompoundInterest;


    printf("Enter Principal Amount : ");
    scanf("%f", &principal);

    printf("Enter Rate Of Interest (In Percentage) : ");
    scanf("%f", &rate);

    printf("Enter Time Period (In Years) : ");
    scanf("%f", &time);


    amount = principal * pow(1 + (rate / 100), time);

    
    CompoundInterest = amount - principal;

    printf("Amount After %.2f years : %.2f\n", time, amount);
    printf("Compound Interest : %.2f\n", CompoundInterest);

    return 0;
}
