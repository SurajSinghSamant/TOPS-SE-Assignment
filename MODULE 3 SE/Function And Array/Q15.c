//Store 5 numbers in array and sort it in ascending order
#include <stdio.h>
int main()
{
    int arr[5];
    int i, j, temp;
    printf("Enter 5 Numbers : ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++)
        {
            if(arr[j] > arr[j + 1])
             {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array In Ascending Order : ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


