//Find out length of string using without inbuilt function
#include <stdio.h>

int main()
{
    char str[100], i;
    printf("Enter A String : ");
    scanf("%s",str);

    for(i=0; str[i] !='\0'; i++);
       printf("\nLength Of Input String : %d\n",i);
    
    return 0;
}

