// Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>

int main()
{
    int ctr=0,j,freq=0;
        int i,s,spc;
    char str[100];
    
       printf("\n\nFind The Number Of Times The Word 'is' In Any Combination Appears \n");
       printf("----------------------------------------------------------------------\n");

    printf("Input The String : ");
    fgets(str,sizeof str,stdin);

        ctr=strlen(str);
    
    /*Counts the frequency of the word 'is' with a trailing space*/
    for(j=0;j<=ctr-3;j++)
    {
        i=(str[j]=='i'||str[j]=='I');
        s=(str[j+1]=='s'||str[j+1]=='S');
        
        spc=(str[j+3]==' '||str[j+3]=='\0');
        if ((i&&s&&spc)==1)
           freq++;
    }
    printf("The Frequency Of The Word \'is\' Is : %d\n\n",freq);
    
    return 0;
}
