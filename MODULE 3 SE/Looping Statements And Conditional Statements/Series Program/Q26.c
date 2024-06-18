// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() 
{
    int n, sum = 0, i, j;
    
    printf("Enter The Value Of n : ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        int inner_sum = 0;
        for (j = 1; j <= i; j++) {
            inner_sum += j;
        }
        sum += inner_sum;
    }
    
    printf("Sum Of The Series Is : %d\n", sum);
    
    return 0;
}


