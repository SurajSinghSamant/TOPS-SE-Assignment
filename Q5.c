//Find Area of Cube formula : a = 6a2//
#include<stdio.h>

int main()
{
   float Side, Area;
   
   printf("Enter Side : ");
   scanf("%f", &Side);
   
   Area = 6 * Side * Side;
   printf("Area Of Cube : %.2f", Area);
   return 0;
}
