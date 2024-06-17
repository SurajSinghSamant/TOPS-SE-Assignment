//find the area of a rectangular prism formula : A=2(wl+hl+hw)//
#include <stdio.h>

int main()
{
    float Width, Length, Height, Area;
    
    printf("Enter Width : ");
    scanf("%f", &Width);
    
    printf("Enter Length : ");
    scanf("%f", &Length);
    
    printf("Enter Height : ");
    scanf("%f", &Height);
    
    Area = 2 * (Width * Length + Height * Length + Height * Width);
    printf("Area Of Rectangular Prism : %.2f", Area);
    

    return 0;
}
