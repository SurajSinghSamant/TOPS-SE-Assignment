// WAP to find the largest of three numbers.
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter Number 1 : ");
    scanf("%d",&a);
    
    printf("Enter Number 2 : ");
    scanf("%d",&b);
    
    printf("Enter Number 3 : ");
    scanf("%d",&c);
    
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    
    printf("%d Is Largest Number\n",d);
    
    return 0;
}
