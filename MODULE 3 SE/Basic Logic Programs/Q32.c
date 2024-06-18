//Accept 2 numbers and find out its sum check it size
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum : %d\n", sum);

    if (sum > 10000) {
        printf("Size Of The Sum Is Large.\n");
    } else if (sum > 1000) {
        printf("Size Of The Sum Is Medium.\n");
    } else {
        printf("Size Of The Sum Is Small.\n");
    }

    return 0;
}
