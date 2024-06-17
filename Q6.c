//Find area of Triangle Formula : A = 1/2 × b × h//
#include<stdio.h>

int main()
{
   float Base, Height;
   
   printf("Enter Base : ");
   scanf("%f", &Base);
   
   printf("Enter Height : ");
   scanf("%f", &Height);
   
   float Area;
   Area = 0.5 * Base * Height;
   
   printf("Area Of Triangle : %.2f", Area);
   return 0;
}
