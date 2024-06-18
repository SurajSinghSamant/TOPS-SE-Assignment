// WAP to input the week number and print week day.
#include<stdio.h>

int main ()
{
int day;

printf("Enter Week Number (1-7) : ");
scanf("%d", &day);

switch(day)
{
    case 1:
    printf("It's Monday");
    break;
        
    case 2:
    printf("It's Tuesday");
    break;
        
    case 3:
    printf("It's Wednesday");
    break;
        
    case 4:
    printf("It's Thursday");
    break;
        
    case 5:
    printf("It's Friday");
    break;
        
    case 6:
    printf("It's Saturday");
    break;
        
    case 7:
    printf("It's Sunday");
    break;
        
    default :
    printf("Invalid Input ! ");
    break;
}
    
    return 0;
}
