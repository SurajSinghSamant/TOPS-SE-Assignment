// C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
    int n, reverse = 0, digit;
    printf("Enter The Number : ");
    scanf("%d", &n);

    for (; n != 0; n /= 10)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reverse Number Is : %d\n", reverse);

    return 0;
}

