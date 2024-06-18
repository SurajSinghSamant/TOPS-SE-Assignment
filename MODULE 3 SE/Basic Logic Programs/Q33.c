//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>

int main()
{
    int num;

    printf("Enter An Integer : ");
    scanf("%d", &num);

    printf("First Three Powers Of %d : \n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);

    return 0;
}
