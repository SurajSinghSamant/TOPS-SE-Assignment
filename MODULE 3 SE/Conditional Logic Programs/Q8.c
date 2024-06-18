/* WAP to accept the height of a person in centimeters and categorize the
person according to their height. */
#include <stdio.h>

int main() {
    float height;
    
    printf("Enter Your Height In Cm : ");
    scanf("%f",&height);

    if(height>=168 && height<=175){
        printf("Your Height Is Average\n");
    }
    else if(height>175){
        printf("You Are Tall\n");

    } else {
        printf("You Are Short\n");
    }
}
