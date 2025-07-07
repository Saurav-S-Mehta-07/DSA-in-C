//WAP to copy string using pointers

#include<stdio.h>
int main()
{
    char str[50], copy[50], *pstr, *pcopy;
    printf("enter string: ");gets(str);

    pstr = str;

    puts(str);

    pcopy = copy;

    while(*pstr!='\0')
    {
        *pcopy = *pstr;
        printf("*pcopy = %c\n",*pcopy);
        pstr++;
        pcopy++;
    }
    *pcopy = '\0';
     
    pcopy = copy;

    // puts(pcopy);

    while(*pcopy!='\0')
    {
        printf("%c",*pcopy);
        pcopy++;
    }

    return 0;
}