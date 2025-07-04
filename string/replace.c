//WAP to replace a sub string with a substring of a string

#include<stdio.h>
#include<string.h>
int main(){

    char str[50], sub[20], replace[20];


    int i = 0, j,k,found = 0;

    printf("enter string: ");gets(str);
    printf("enter sub string: ");gets(sub);
    printf("enter replacing string: ");gets(replace);

    int l = strlen(str);
    int sl = strlen(sub);
    int rl = strlen(replace);

    while(str[i]!='\0'){

        k= i,j=0;
        while(str[k]==sub[j] && sub[j]!='\0'){
            k++;
            j++;
        }

        if(sub[j]=='\0'){
                found = 1;
                int pos  = i;
                while(str[i+rl]!='\0'){
                    printf("str[%d] = %c\n",i, str[i]);
                    str[i+rl] = str[i+sl];
                    i++;
                }
                printf("str = %s\n",str);
                j= 0;
                while(replace[j] != '\0'){
                    str[pos] = replace[j];
                    pos++;
                    j++;
                }
                str[l-sl+rl] = '\0';
                printf("str = %s",str);
                break;
        }

        i++;
    }
    if(found == 0){
        printf("substring not found");
    }


    return 0;

}