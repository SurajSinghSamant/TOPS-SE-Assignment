// WAP Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter The Character : ");
    scanf("%c",&ch);
    
    switch (ch)
    {
    case 'a' :
        printf("%c Is Vowel\n",ch);
        break;
            
    case 'e' :
        printf("%c Is Vowel\n",ch);
        break;
            
    case 'i' :
        printf("%c Is Vowel\n",ch);
        break;
            
    case 'o' :
        printf("%c Is Vowel\n",ch);
        break;
            
    case 'u' :
        printf("%c Is Vowel\n",ch);
        break;
    
    default :
    printf("%c Is Consonant\n",ch);
        break;
    }
    return 0;
}
