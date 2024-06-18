//Find circumference of Triangle formula : triangle = a + b + c//
#include <stdio.h>

int main()
{
    float Side1, Side2, Side3, Circumference;
    
    printf("Enter Side 1 : ");
    scanf("%f", &Side1);
    
    printf("Enter Side 2 : ");
    scanf("%f", &Side2);
    
    printf("Enter Side 3 : ");
    scanf("%f", &Side3);
    
    Circumference = Side1 + Side2 + Side3;
    printf("Circumference Of Rectangle : %.2f", Circumference);
    

    return 0;
}
