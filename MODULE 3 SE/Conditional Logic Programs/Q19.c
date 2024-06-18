/* Write a program in C to calculate and print the electricity bill of a given
 customer. The customer ID, name, and unit consumed by the user should
 be captured from the keyboard to display the total amount to be paid to the
 customer. The charge are as follow :
  Unit  Charge/unit
 
  upto 350 @1.20
  350 and above but less than 600 @1.50
  600 and above but less than 800 @1.80
  800 and above @2.00 */
#include <stdio.h>

int main()
{
    int id;
    char name[25];
    float unit, total_amount = 0.0;
    
    printf("Enter The Id : ");
    scanf("%d", &id);
    
    printf("Enter The Name : ");
    scanf("%s", name);

    printf("Enter The Units : ");
    scanf("%f", &unit);

    if (unit <= 350)
    {
        total_amount = unit * 1.20;
        printf("Total Amount To Be Paid : %.2f\n", total_amount);
    }
    else if (unit <= 600)
    {
        total_amount = unit * 1.50;
        printf("Total Amount To Be Paid : %.2f\n", total_amount);
    }
    else if (unit <= 800)
    {
        total_amount = unit * 1.80;
        printf("Total Amount To Be Paid : %.2f\n", total_amount);
    }
    else
    {
        total_amount = unit * 2.00;
        printf("Total Amount To Be Paid : %.2f\n", total_amount);
    }
    
    printf("------------------------------------------\n");
    printf("                  BILL                    \n");
    printf("------------------------------------------\n");
    
    printf("Customer ID : %d\n", id);
    printf("Customer Name : %s\n", name);
    printf("Total Amount To Be Paid : %.2f\n", total_amount);
    
    return 0;
}
