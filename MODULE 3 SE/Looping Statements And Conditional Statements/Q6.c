// WAP to print Fibonacci series up to given numbers
#include<stdio.h>

int main()
{
    int i=1, n1=0, n2=1, n3 = n1 + n2;
    int end;
    
    printf("Enter Your End Point : ");
    scanf("%d",&end);
    
    printf("Your Fibonacci Series Is : \n");
    printf("%d\t%d\t%d\t", n1, n2, n3);
    
    while(i <= end-3)
    {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
        printf("%d\t",n3);
        i++;
    }
    printf("\n");
    
    return 0;
}


