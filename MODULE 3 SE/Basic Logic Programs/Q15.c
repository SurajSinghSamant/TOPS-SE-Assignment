// Convert school’s name in abbreviated form
#include <stdio.h>

int main()
{
    char fname[20], mname[20], lname[20];
    printf("Enter Your School's First Name, Middle Name, Last Name : \n");
    scanf("%s %s %s",fname, mname, lname);
    printf("Abbriviation Of School Name Is : %c %c %s\n",fname[0],mname[0],lname);
    
    return 0;
}
