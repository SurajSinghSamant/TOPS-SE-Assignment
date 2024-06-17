//Convert temperature Fahrenheit to Celsius
#include <stdio.h>

int main() 
{
    float fahrenheit, celsius;

    printf("Enter Temperature In Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("Temperature In Celsius : %.2f\n", celsius);

    return 0;
}
