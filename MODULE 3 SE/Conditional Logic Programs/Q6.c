//Find the Character Is Vowel or Not
#include <stdio.h>

int main()
{
    char box;
    
    printf("Enter The Character : ");
    scanf("%c",&box);
    
    switch (box)
    {
    case 'a':
        printf("%c Is Vowel\n",box);
        break;
            
    case 'e':
        printf("%c Is Vowel\n",box);
        break;
            
    case 'i':
        printf("%c Is Vowel\n",box);
        break;
            
    case 'o':
        printf("%c Is Vowel\n",box);
        break;
            
    case 'u':
        printf("%c Is Vowel\n",box);
        break;
    
    default:
    printf("%c Is Not Vowel\n",box);
        break;
    }
    
    return 0;
}
