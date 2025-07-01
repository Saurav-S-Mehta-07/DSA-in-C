//WAP to append a string to another string.

#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    printf("enter 1st string: ");
    gets(str1);
    printf("enter 2nd string: ");
    gets(str2);
    int i = 0, j = 0;
    while(str2[i]!='\0'){
        i=i+1;
    }

    while(str1[j]!='\0'){
        str2[i] = str1[j];
        i++;
        j++;
    }
    str2[i] = '\0';

    printf("now, str1 = %s",str1);
    printf("\nand appended string str2 = %s",str2);
    return 0;
}