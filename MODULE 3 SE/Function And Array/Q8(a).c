// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter A String : ");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length / 2; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("%s Is Not A Palindrome\n", string1);
    } else
    {
        printf("%s Is A Palindrome\n", string1);
    }

    return 0;
}






