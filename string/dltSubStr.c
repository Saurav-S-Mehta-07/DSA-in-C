//WAP to delete a sub string from a string

#include<stdio.h>
#include<string.h>
int main(){

    char str[50], sub[20];

    int l = strlen(str);
    int sl = strlen(sub);

    int i = 0, j,k,found = 0;

    printf("enter string: ");gets(str);
    printf("enter sub string: ");gets(sub);


    while(str[i]!='\0')
    {
        j = 0, k = i;

        while(str[k]==sub[j] && sub[j]!='\0'){
            k++;
            j++;
        }
        if(sub[j]=='\0')
        {
            found = 1;
            while(str[i]!='\0'){
                str[i] = str[i+j];
                i++;
            }
            printf("str = %s\n",str);
            break;
        }
        i++;
    }

 
  return 0;
}   