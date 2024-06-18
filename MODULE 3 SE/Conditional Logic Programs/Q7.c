//Accept marks from user and check pass or fail
#include<stdio.h>

int main() 
{
    int a, b, c, sum, total = 35;
    
    printf("Enter The Subject 1 Marks : ");
    scanf("%d", &a);
    
    printf("Enter The Subject 2 Marks : ");
    scanf("%d", &b);
    
    printf("Enter The Subject 3 Marks : ");
    scanf("%d", &c);
    
    sum = a + b + c;
    
    if(sum >= total) {
        printf("Total : %d\nYou Have Passed.\n", sum);
    } else {
        printf("Total : %d\nYou Failed.\n", sum);
    }
    
    return 0;
}
