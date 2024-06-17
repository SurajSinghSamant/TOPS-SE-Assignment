//Convert minutes into seconds and hours
#include<stdio.h>

int main()
{
    int second, hour, minute;
    printf("Enter Minutes To Convert Into Hour And Seconds : ");
    
    scanf("%d",&minute);
    
    hour = minute / 60;
    second = minute * 60;
    
    printf("Total Hours : %d\n",hour);

    printf("Total Seconds : %d\n",second);
    
    return 0;
}
