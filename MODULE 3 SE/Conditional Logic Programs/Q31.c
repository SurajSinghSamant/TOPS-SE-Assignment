/* Write a program in C to read any Month Number in integer and display the
 number of days for this month. */
#include <stdio.h>

int main() 
{
    int month;

    printf("Enter The Month Number (1-12) : ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid Month Number !\n");
    } else
    {
        switch(month)
        {
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                
                printf("Number Of Days In Month %d : 31\n", month);
                break;
                
            case 4 : case 6 : case 9 : case 11 :
                
                printf("Number Of Days In Month %d : 30\n", month);
                break;
                
            case 2 :
                printf("Number Of Days In Month %d : 28 or 29\n", month);
                break;
        }
    }

    return 0;
}
