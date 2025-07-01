//WAP to reverse a given string

#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("enter string: ");
    gets(str);
    

    int i = 0, j = strlen(str) -1;
    printf("original string is: %s",str);
    while(i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("\nreversed string is : %s",str);

    return 0;
}