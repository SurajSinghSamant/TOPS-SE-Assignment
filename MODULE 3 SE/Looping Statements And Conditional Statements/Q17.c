// Calculate 5 numbers from user and calculate number of even and odd using while loop
#include <stdio.h>

int main()
{
    int i=1, num;
   
    while(i<=5)
    {
        printf("Enter The Number : ");
        scanf("%d",&num);
        
        if(num % 2 == 0) {
            printf("Number Is Even\n");
        }
        else{
            printf("Number Is Odd\n");
        }
        i++;
    }
    return 0;
}
