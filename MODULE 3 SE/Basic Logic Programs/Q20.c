#include <stdio.h>

int main() {
    float salary, remainingSalary, Premium, loanInstallment;

    printf("Enter Monthly Salary : ");
    scanf("%f", &salary);
    Premium = 0.1 * salary;

    remainingSalary = salary - Premium;
    loanInstallment = 0.1 * remainingSalary;
    remainingSalary -= loanInstallment;

    printf("Salary After Deducting Insurance Premium : %.2f\n", remainingSalary + Premium);
    printf("Insurance Premium : %.2f\n",Premium);
    printf("Loan Installment : %.2f\n", loanInstallment);
    printf("Remaining Salary After Deducting Loan Installment : %.2f\n", remainingSalary);

    return 0;
}
