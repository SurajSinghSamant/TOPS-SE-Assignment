// Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int max_chars = 0;

    printf("Enter A String : ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string using strlen()
    int length = strlen(str);

    // Iterate through the string to find the maximum number of characters
    for (int i = 0; i < length; i++) {
        // Increment max_chars for each character encountered
        max_chars++;
    }

    printf("Maximum Number Of Characters In The String : %d\n", max_chars);

    return 0;
}

