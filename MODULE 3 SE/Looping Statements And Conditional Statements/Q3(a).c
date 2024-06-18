// WAP to take 10 no. Input from user and find out how many even numbers are there
#include <stdio.h>
int main() 
{
    int i ,num;
    
    for(i=1;i<=10;i++)
    {
        printf("Enter The Number : ");
        scanf("%d",&num);

        if(num%2==0) {
            printf("%d Is Even\n",num);
        }
    }
    return 0;
}


    

        
