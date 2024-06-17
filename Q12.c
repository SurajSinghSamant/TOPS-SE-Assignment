/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/
#include <stdio.h>

int main()
{
    int Students, Apples;
    
    printf("Enter Number Of Students : ");
    scanf("%d", &Students);
    
    Apples = 5 * Students;
    printf("Number Of Required Apples : %d", Apples);
    
    return 0;
}
