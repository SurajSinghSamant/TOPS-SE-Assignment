//Area of Square//
#include<stdio.h>

int main()
{
   float Side, Area;
   
   printf("Enter Side : ");
   scanf("%f", &Side);
   
   Area = Side * Side;
   printf("Area Of Square : %.2f", Area);
   return 0;
}
