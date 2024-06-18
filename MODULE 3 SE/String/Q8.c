// Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];
    int i,vowels=0,consonants=0;
 
    printf("Enter The String : ");
    gets(s);
     
    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
        {
        
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
              vowels++;
            else
             consonants++;
        }
 
     }
     
     
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",consonants);
    
    return 0;
}
