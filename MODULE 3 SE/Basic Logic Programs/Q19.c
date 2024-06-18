// Calculate compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    printf("Enter Principal Amount : ");
    scanf("%f", &principal);

    printf("Enter Rate Of Interest : ");
    scanf("%f", &rate);

    printf("Enter Time Period (In Years) : ");
    scanf("%f", &time);

    compound_interest = principal * (pow((1 + rate / 100), time) - 1);

    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
