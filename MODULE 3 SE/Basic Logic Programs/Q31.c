//Convert kilometers into meters
#include<stdio.h>

int main()
{

    int meter, km;
    
    printf("Enter Km : ");
    scanf("%d",&km);
    
    meter = km * 1000;
    
    printf("Meter : %d\n",meter);
    
    return 0;
}
