/*WAP to read multiple lines of text and then 
count the number of characters, words, and lines in the text */

#include<stdio.h>
#include<string.h>

int main(){

    char str[500];
    
    int i  = 0;
    printf("enter the text to stop enter *: \n");
    scanf("%c",&str[i]);

    while(str[i]!='*')
    {  
       i++;
       scanf("%c",&str[i]);
    }
    str[i] = '\0';

    i = 0;
    int count = 1, word = 1, line = 1;

    while(str[i]!='\0')
    {
        count++;

        if(str[i]=='\n'){
            line++;
            count--;
        }

        if((str[i]==' ' && str[i+1]!=' ' ) || (str[i]=='\n' && str[i-1])){
            word++;
        }

        i++;
    }
    printf("character = %d, words = %d, line = %d\n",count, word,line);
    return 0;
}