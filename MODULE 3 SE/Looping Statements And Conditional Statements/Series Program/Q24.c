//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter The Value Of n : ");
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
        sum= sum+ i;
    printf("Sum Of The Series Is : %d\n",sum);
     
    return 0;
}
