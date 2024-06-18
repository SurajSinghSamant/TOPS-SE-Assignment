// Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>

int main()
{
    int i, j, num, fact;
   
    for (i=1; i<=5; i++)
    {
         printf("Enter The Number : ");
         scanf("%d",&num);
        
         fact=1;
          
         for(j=1; j<=num; j++){
            fact = fact * j;
         }
           printf("The Factorial Is : %d\n",fact);
    }
    return 0;
}









