//WAP to take 5 student names from user using array of string

#include<stdio.h>
int main(){
    char name[5][30];

    int i = 0, j =0;

    while(i<5){
        printf("enter name of %d student : ",i+1);gets(name[i]);
        i++;
    }
   
    while(j<5){
        printf("name : %s\n",name[j]);
        j++;
    }

    return 0;
    
}