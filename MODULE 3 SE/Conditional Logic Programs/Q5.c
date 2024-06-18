//Check Number Is Positive or Negative
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter The Number : ");
    scanf("%d",&num);
    
    if(num>=0) {
        printf("%d Is Positive\n",num);
    }
    else{
        printf("%d Is Negative\n",num);
    }
    return 0;
}
