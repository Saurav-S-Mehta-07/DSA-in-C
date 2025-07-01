//WAP to insert a string in the main text


#include<stdio.h>
#include<string.h>

int main(){

    char str[50],subStr[50],newStr[100];
    printf("enter string: ");
    gets(str);
    int i = 0,j = 0,k = 0;

       
    printf("enter sub String: ");
    gets(subStr);
    

    int pos;
    printf("enter position from where you want to insert substring: ");
    scanf("%d",&pos);

    while(str[i]!='\0'){
        if(i==pos){
             while(subStr[k]!='\0'){
                newStr[j] = subStr[k];
                j++;
                k++;
             }
             pos = -1;
             i--;
        }

        else{
            newStr[j] = str[i];
            j++;
        }
        i++;
    }
    newStr[j]='\0';
    printf("%s is inserted in %s and result is: \n %s",subStr,str,newStr);
    return 0;
}