/* Write a program of structure for five employee
 that provides the following information -print and
 display empno, empname, address and age */

#include <stdio.h>
#include <string.h>
struct Employee
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main()
{
    struct Employee employees[5];

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter Details For Employee %d \n", i + 1);
        printf("Employee Number : ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name : ");
        scanf(" %[^\n]", employees[i].empname);
        printf("Address : ");
        scanf(" %[^\n]", employees[i].address);
        printf("Age : ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information : \n");
    for (int i = 0; i < 5; ++i) {
        printf("Employee %d :\n", i + 1);
        printf("EmpNo : %d\n", employees[i].empno);
        printf("EmpName : %s\n", employees[i].empname);
        printf("Address : %s\n", employees[i].address);
        printf("Age : %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}

