//WAP to check if a substring is in  string or not

#include<stdio.h>
#include<string.h>

int main(){

    char str[50],subStr[50];
    printf("enter string: ");
    gets(str);
    int i = 0,subLength;
    int length = strlen(str);
       
    printf("enter sub String: ");
    gets(subStr);
    subLength = strlen(subStr);

    int max = length - subLength+1;
    int flag = 0;
    while(i<max){
        for(int k = 0; k<subLength; k++){
               if(subStr[k]!=str[i+k]){
                i++;
               }
        }
    }
    

    return 0;
}