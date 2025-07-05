#include<stdio.h>
int main(){
    char str[200],pat[20],new_str[200],rep_pat[100];
    int i = 0, j= 0, k,  n=0, copy_loop = 0, rep_index = 0;
    printf("enter string: ");gets(str);
    printf("enter sub string: ");gets(pat);
    printf("enter replacing pattern: ");gets(rep_pat);

    while(str[i]!='\0'){
        j= 0, k =i;
        while(str[k]==pat[j] && pat[j]!='\0'){
            k++;
            j++;
        }
        if(pat[j]=='\0'){
            copy_loop = k;
            while(rep_pat[rep_index]!='\0'){
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_str[n] = '\0';
    printf("\nthe new string is : ");
    puts(new_str);
    return 0;
}