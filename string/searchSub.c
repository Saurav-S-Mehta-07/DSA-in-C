//WAP to find the position of substring in a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char sub[20];

    int i = 0, j,k,found = 0;

    printf("enter string: ");gets(str);
    printf("enter sub string: ");gets(sub);

    int l = strlen(str);
    int sl = strlen(sub);

    while(str[i]!='\0')
    {
        k = i,j = 0;
        while(str[k]==sub[j] && sub[j]!='\0'){
            k++;
            j++;
        }
        if(sub[j]=='\0'){
            found = 1;
            break;
        }
        i++;
    }
    if(found){
        printf("found at position %d of string",i);
    }
    else{
        printf("not found");
    }

    return 0;

}