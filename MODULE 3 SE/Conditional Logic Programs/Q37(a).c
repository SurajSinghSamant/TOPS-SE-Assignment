//  WAP to show Monday to Sunday using switch case
#include <stdio.h>
int main()
{
    int choice;
    
    printf("Enter Day Number From 1 To 7 : ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("Monday\n");
        break;
            
    case 2:
        printf("Tuesday\n");
        break;
            
    case 3:
        printf("Wednesday\n");
        break;
            
    case 4:
        printf("Thursday\n");
        break;
            
    case 5:
        printf("Friday\n");
        break;
            
    case 6:
        printf("Saturday\n");
        break;
            
    case 7:
        printf("Sunday\n");
        break;
    
    default:
    printf("Enter Valid Day Number\n");
        break;
    }
    
    return 0;
}
