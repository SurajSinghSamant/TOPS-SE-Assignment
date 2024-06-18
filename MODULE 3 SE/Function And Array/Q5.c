
// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;
    
    printf("Array Size : ");
    scanf("%d",&n);
    
        printf("Elements : ");
        
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n\nAscending : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n\nDescending : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;

}



