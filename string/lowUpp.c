//WAP to convert the lower case characters of a string into upper case.

#include<stdio.h>
int main(){
    char str[20];
    printf("enter string: ");
    gets(str);
    printf("string is : %s.",str);

    printf("\nstring in upper case: ");
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i]-32;
        }
    }
    puts(str);
    return 0;
}