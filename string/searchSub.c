//WAP to check if a substring is in  string or not

#include<stdio.h>
#include<string.h>

int main(){

    char str[50],subStr[50];
    printf("enter string: ");
    gets(str);
    int i = 0,j = 0,subLength;
    int length = strlen(str);
       
    printf("enter sub String: ");
    gets(subStr);
    
    subLength = strlen(subStr);

    int flag = 1,b = 1;

    while(subLength>0 && str[j]!='\0'){
        if(subStr[i]==str[j]){
            flag = 1;
            subLength--;
            i++;
            j++;
            while(subLength>0 && str[j]!='\0')
            {
                if(subStr[i]!=str[j]){
                    flag = 0;
                    b = 0;
                    break;
                }
                subLength--;
                i++;
                j++;
            }
        }
        else{
            flag = 0;
            j++;
        }

        if(b ==0){
            break;
        }
    }


    if(flag == 1){
        printf("found");
    }else{
        printf("substring not found");
    }
    
    return 0;
}