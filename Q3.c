/*WAP to Find Area And Circumference of Circle*/

#include<stdio.h>

int main()
{
    float pi = 3.14, r, Area, Circumference;
    
    printf("Enter Radius : ");
    scanf("%f", &r);
    
    Area = pi * r * r;
    Circumference = 2 * pi * r;
    
    printf("Area Of Circle : %.2f \n", Area);
    printf("Circumference Of Circle : %.2f \n", Circumference);
    return 0;
}
