// Accept 5 names from user at run time.
#include<stdio.h>

int main() 
{
    char name[5];
    int i;
    
    for (i=1; i<=5; i++) {
        printf("Enter Your Name : ");
        scanf("%s", name);
        printf("Name Is %s\n", name);
    }
    return 0;
}
