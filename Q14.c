// Find ascii value of given number
#include<stdio.h>
int main ()
{
    int num;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    if(num>=0 && num<=9) 
    {
        int AsciiValue = num + '0';
        printf("Ascii Value Of %d Is %d",num,AsciiValue);
    } else {
        printf("Enter A Valid Number.\n");
    }
    
    return 0;
}
