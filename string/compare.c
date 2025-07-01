//WAP to compare two strings

#include<stdio.h>
#include<string.h>

int main(){
    char str1[30], str2[30];
    int i = 0, flag = 0;
    int l1,l2;

    printf("enter str1: ");gets(str1);
    printf("enter str2: ");gets(str2);

    l1 = strlen(str1);
    l2 = strlen(str2);


    if(l1==l2)
    {
        while(i<l1)
        {
            if(str1[i]==str2[i]){
                  i++;
            }
            else{
                printf("\nstrings are not equal.");
                break;
            }
        }

    }

    if(l1!=l2){
        printf("\nstrings are not equal.");
    }
    if(i==l1){
        printf("\nstrings are equal.");
        flag = 1;
    }

    if(flag == 0){
        if(str1[i]>str2[i])
        {
            printf("\nstr1 is greater than str2");
        }
        else if(str2[i]>str1[i]){
            printf("\nstr2 is greater than str1");
        }
    }
  return 0;
}