// WAP to show difference between Structure and Union.

#include<stdio.h>

// Structure definition
struct employee1 {
    int id;
    char name[100];
};

// Union definition
union employee2 {
    int id;
    char name[100];
};

int main() {
    struct employee1 s_emp;  // Declare a struct variable
    union employee2 u_emp;   // Declare a union variable
    
    printf("%d is Size Of Structure\n", sizeof(s_emp));  // Print size of struct employee1
    printf("%d is Size Of Union\n", sizeof(u_emp));     // Print size of union employee2
    
    return 0;
}

