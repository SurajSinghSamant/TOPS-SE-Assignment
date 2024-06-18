//Write a program to find out the max number from given array using function
#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter The Size Of An Array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d Elements : \n", n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    printf("Maximum Value In The Array Is : %d\n", max);

    return 0;
}



