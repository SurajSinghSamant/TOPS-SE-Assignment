//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int num;
    
    printf("Emter The Number : ");
    scanf("%d",&num);
    
    num % 2 == 0 ? printf("%d Is Even\n",num) : printf("%d Is Odd\n",num);
    
    return 0;
}
