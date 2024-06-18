//Accept 5 numbers from user and perform sum of array
#include <stdio.h>
int main()
{
    int arr[5];
    int i, sum = 0;
    printf("Enter 5 Numbers : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("The Sum Of The Numbers In Array Is : %d\n", sum);

    return 0;
}


