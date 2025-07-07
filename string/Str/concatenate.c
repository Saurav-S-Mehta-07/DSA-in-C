//WAP to concatenate two strings using pointer

#include<stdio.h>
#include<string.h>
int main(){
    char fname[30], lname[30], *pf, *pl;
    pf = fname;
    pl = lname;

    printf("enter first name: "); gets(fname);
    printf("enter last name: "); gets(lname);

    int length = strlen(fname);

    pf = pf + length;

    while(*pl != '\0')
    {
        *pf = *pl;
        pf++;
        pl++;
    }
    *pf = '\0';

    pf = fname;
    
    printf("after concatenation string is : "); puts(pf);
    
   
    return 0;
}