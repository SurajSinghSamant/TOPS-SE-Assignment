/* Accept the input month number and print number of days in that
month. */
#include <stdio.h>

int main() 
{
    int Month;

    printf("Enter The Month Number From 1 To 12 : ");
    scanf("%d", &Month);

    if (Month < 1 || Month > 12) {
        printf("Enter Valid Month Number\n");
    }
    else {
        switch(Month) {
                
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                
                printf("Number Of Days In Month %d : 31\n", Month);
                break;
                
            case 4 : case 6 : case 9 : case 11 :
                printf("Number Of Days In Month %d : 30\n", Month);
                break;
                
            case 2 :
                printf("Number Of Days In Month %d : 28 or 29\n", Month);
                break;
        }
    }

    return 0;
}
