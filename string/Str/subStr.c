//WAP to extract a substring from the middle of a given string

#include<stdio.h>
#include<string.h>

int main(){

    char str[20],subStr[20];
    printf("enter string: ");
    gets(str);
    int i = 0,j = 0,subLength,subPos;
    int length = strlen(str);
       
    printf("enter position from which to start substring: ");
    scanf("%d",&subPos);
    printf("enter length of substring: ");
    scanf("%d",&subLength);

    i = subPos-1;

    while(str[i]!='\0' && subLength>0){
        subStr[j] = str[i];
        j++;
        i++;
        subLength--;
    }
    subStr[j] = '\0';
    printf("\nthe sub string is: ");
    puts(subStr);
    return 0;
}