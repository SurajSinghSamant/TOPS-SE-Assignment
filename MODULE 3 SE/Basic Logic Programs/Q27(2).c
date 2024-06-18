//Convert days into months
#include <stdio.h>

int main()
{
    int total_days, month;
    
    printf("Enter Number Of Days : ");
    scanf("%d", &total_days);

    month = total_days / 30;
    
    printf("Months : %d\n",month);
    
    return 0;
}
