// WAP to find factorial using recursion
#include<stdio.h>

int fact(int n);
int main()
{
    int num;
    printf("Enter The Endpoint : ");
    scanf("%d", &num);
    
    printf("%d\n",fact(num));
    
    return 0;
}


int fact(int n)
{
    if(n>=1)
    {
        return n * fact(n-1);
    }
    else{
        return 1;
    }
}

