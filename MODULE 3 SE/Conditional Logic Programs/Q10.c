//WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main()
{
    int num;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    if(num>0){
        printf("%d Is Positive\n",num);
    }
    else if (num<0)
    {
        printf("%d Is Positive\n",num);
    } else {
        printf("%d Is %d",num,num);
    }
    
}
