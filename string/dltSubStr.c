//WAP to delete a sub string from a string

#include<stdio.h>
#include<string.h>
int main(){

    char str[100], sub[20], newText[100];


    int i = 0, j,k,found = 0,copy_loop = 0,n=0;

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
            copy_loop=k;
            found = 1;
        }
        newText[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++; 
    }
    
    if(found==0){
       printf("sub is string not found");
    }else{
       newText[n]='\0';
       printf("the new string is: %s",newText);
    }
 
  return 0;
}   