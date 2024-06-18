/* Write a C program to check whether a triangle can be formed with the given
 values for the angles. */
#include <stdio.h>

int main()
{
    float a1, a2, a3;
    
    printf("Enter The Length Of Angle 1 : ");
    scanf("%f",&a1);
    
    printf("Enter The Length Of Angle 2 : ");
    scanf("%f",&a2);
    
    printf("Enter The Length Of Angle 3 : ");
    scanf("%f",&a3);
    
    if(a1 + a2 + a3 == 180) {
        printf("Triangle Can Be Formed\n");
    }
    else {
        printf("Triangle Can Not Be Formed\n");
    }
}
