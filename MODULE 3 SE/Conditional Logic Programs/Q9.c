/* C Program to Check Uppercase or Lowercase or Digit or Special
Character */
#include<stdio.h>
int main() 
{
    char x;
    
    printf("Enter The Character : ");
    scanf("%c",&x);
    
    if(x>='A' && x<='Z') {
        printf("%c Is Uppercase\n",x);
    }
    else if(x>='a' && x<='z') {
        printf("%c Is Lowercase\n",x);
    }
    else if (x>='0' && x<='9')
    {
         printf("%c Is Number\n",x);
    }
    else{
        printf("%c Is Special Character\n",x);
    }
    return 0;
}
