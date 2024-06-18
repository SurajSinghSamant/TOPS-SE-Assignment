//Convert years into days and months
#include <stdio.h>

int main()
{
    int total_days, years, months;
    
    printf("Enter Number Of Years : ");
    scanf("%d",&years);

    months = years * 12;
    total_days = years * 365;
    
    printf("Total Months : %d \nTotal Days : %d \n",months,total_days);
    
    return 0;
}
