/*WAP to count upper case and lower case letter, 
special character and numbers in string using pointer*/

#include<stdio.h>
int main()
{
    char name[50];
    printf("enter name: ");
    gets(name);
    char *pstr;
    pstr = name;
    printf("name : ");puts(pstr);

    int lower = 0, upper = 0, special = 0, number = 0;
    while(*pstr!='\0')
    {
        if(*pstr>='a' && *pstr<='z')
        {
            lower++;
        }
        else if(*pstr>='A' && *pstr<='Z')
        {
            upper++;
        }else if(*pstr>='0' && *pstr<='9'){
            number++;
        }
        else{
            special++;
        }

        if(*pstr=='\n'){
            special--;
        }
        pstr++;
    }
    printf("upper = %d, lower = %d, special character = %d and number = %d\n", upper,lower,special,number);



    return 0;
}