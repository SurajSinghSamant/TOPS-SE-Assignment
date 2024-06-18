/* Accept 5 employees name and salary and count average and total
salary */
#include <stdio.h>

int main() {
    
    char names[5][50];
    float salaries[5], totalSalary = 0, averageSalary;
    int i;

    printf("Enter The Names And Salaries Of 5 Employees \n");
    for(i = 1; i < 6; i++)
    {
        printf("Employee %d Name : ", i);
        scanf("%s", names[i]);
        printf("Employee %d Salary : ", i);
        scanf("%f", &salaries[i]);
        totalSalary= totalSalary+salaries[i];
    }

    averageSalary = totalSalary / 5;

    printf("\nTotal Salary : %.2f\n", totalSalary);
    printf("Average Salary : %.2f\n", averageSalary);

    return 0;
}
