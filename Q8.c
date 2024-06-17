//Find circumference of Rectangle formula : C = 2 *(length+width)//
#include <stdio.h>

int main()
{
    float Length, Width, Circumference;
    
    printf("Enter Length : ");
    scanf("%f", &Length);
    
    printf("Enter Width : ");
    scanf("%f", &Width);
    
    Circumference = 2 * (Length * Width);
    printf("Circumference Of Rectangle : %.2f", Circumference);
    

    return 0;
}
