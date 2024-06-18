// WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Elements In The Array : ");
    scanf("%d", &n);
 
    int arr[n];
 
    printf("Enter %d Elements In The Array : ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Even Numbers In The Array Are : ");
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
 
    printf("\nOdd Numbers In The Array Are : ");
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }
    
    return 0;
}
