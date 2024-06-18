// Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>

int main()
{
    int count = 1, number, originalNumber, remainder, reversedNumber = 0;

    while (count <= 3) {
        printf("Enter Number %d : ", count);
        scanf("%d", &number);

        originalNumber = number;

        while (number != 0) {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        if (originalNumber == reversedNumber) {
            printf("%d Is A Palindrome\n", originalNumber);
        } else {
            printf("%d Is Not A Palindrome\n", originalNumber);
        }

        reversedNumber = 0;
        count++;
    }

    return 0;
}

