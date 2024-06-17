//Find circumference of square formula : C = 4 * a//
#include <stdio.h>

int main()
{
    float Side, Circumference;
    
    printf("Enter Side : ");
    scanf("%f", &Side);
    
    Circumference = 4 * Side;
    printf("Circumference Of Square : %.2f", Circumference);
    

    return 0;
}
