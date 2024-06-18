// Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>

int main()
{
    int num, originalNum, remainder, result = 0;

    printf("Enter Number : ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == originalNum)
        printf("%d Is An Armstrong Number.", num);
    else
        printf("%d Is Not An Armstrong Number.", num);

    return 0;
}
