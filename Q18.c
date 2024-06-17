//Calculate person’s Annual salary//
#include<stdio.h>

int main()
{
    int Salary, AnnualSalary;
    
    printf("Enter Monthly Salary : ");
    scanf("%d", &Salary);
    
    AnnualSalary = Salary * 12;
    
    printf("The Annual Salary Is %d\n", AnnualSalary);

    return 0;
}
