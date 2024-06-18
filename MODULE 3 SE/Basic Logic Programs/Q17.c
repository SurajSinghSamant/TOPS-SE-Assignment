#include <stdio.h>

int main()
 {

    
    float Salary, Premium, Premium_Rate = 0.05;

    printf("Enter The Person's Salary : ");
    scanf("%f", &Salary);
    
    Premium = Salary * Premium_Rate;


    printf("The Insurance Premium Is : %.2f\n", Premium);

    return 0;
}
