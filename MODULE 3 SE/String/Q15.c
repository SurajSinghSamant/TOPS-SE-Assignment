// Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    char string[1000];
    printf("Enter Your String : ");
    fgets(string,sizeof string,stdin);
    char words[100][100], small[100], large[100];
    int i = 0, j = 0, k, length;
      
    //Split the string into words such that each row of array words represents a word
    for(k=0; string[k]!='\0'; k++){
          
        //Here, i represents row and j represents column of two-dimensional array words
        if(string[k] != ' ' && string[k] != '\0'){
            words[i][j++] = string[k];
        }
        else{
            words[i][j] = '\0';
            //Increment row count to store new word
            i++;
            //Set column count to 0
            j = 0;
        }
    }
      
    //Store row count in variable length
    length = i + 1;
      
    //Initialize small and large with first word in the string
    strcpy(small, words[0]);
    strcpy(large, words[0]);
      
    //Determine smallest and largest word in the string
    for(k = 0; k < length; k++){
          
        //If length of small is greater than any word present in the string
        //Store value of word into small
        if(strlen(small) > strlen(words[k])){
            strcpy(small, words[k]);
        }
        //If length of large is less than any word present in the string
        //Store value of word into large
        if(strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }
      
    printf("Smallest Word : %s\n", small);
    printf("Largest Word : %s", large);
      
    return 0;
}
