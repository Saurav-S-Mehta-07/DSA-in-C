//WAP to find length of string without any string function

#include<stdio.h>
int main()
{
    char str[30];
    printf("enter string: ");
    gets(str);

    int length,i =0;
    while(str[i]!='\0'){
        i=i+1;
    }
    length  = i;
    printf("length of \"%s\" is %d.",str,length);

    return 0;
}