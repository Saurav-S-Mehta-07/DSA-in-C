//WAP to find whether a string is palindrome or not.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    
    char str[50];
    printf("enter your string: "); gets(str);
    
    // name      revName
    // radha == adhar -> not palindrome
    // naman == naman -> yes palindrome
    // Nayan == nayaN -> yes -> for that we have to convert it into lower or upper case
    // NayaN == NayaN -> yes palindrome

    int i=0, n, flag = 0;
    n = strlen(str);

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
           str[i] = tolower(str[i]);
        //    str[i]= str[i]+32;
        }
        i++;
    }

    for(i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-1-i]){
            flag = 1;
            break;
        }
    }

    if(flag){
        printf("Not Palindrome");
    }else{
        printf("Palindrome");
    }


    return 0;
}