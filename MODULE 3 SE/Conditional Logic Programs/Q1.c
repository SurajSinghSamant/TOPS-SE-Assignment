/* Write a C program to accept two integers and check whether they are equal
 or not */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Number 1 : ");
    scanf("%d",&a);
    
    printf("Enter Number 2 : ");
    scanf("%d",&b);
    
    if(a==b) {
        printf("Both Numbers Are Equal\n");
    }
    else {
        printf("Numbers Are Not Equal\n");
    }
    return 0;
}
