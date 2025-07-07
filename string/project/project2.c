/*find length, concatenate, copy, reverse, substring, compare, upper,lower*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char str1[100], str2[100];

void length();
void concatenate();
void copy();
void reverse();
void substring();
void compare();
void lower();
void upper();

int main()
{

    printf("\n|----------------------------------------------------------|\n");
    printf("|                        MENU                              |");
    printf("\n|----------------------------------------------------------|\n");
    printf("\n");
    printf("|                      1.length                            |\n");
    printf("|                      2.concatenate                       |\n");
    printf("|                      3.copy                              |\n");
    printf("|                      4.reverse                           |\n");
    printf("|                      5.substring                         |\n");
    printf("|                      6.compare                           |\n");
    printf("|                      7.lower                             |\n");
    printf("|                      8.upper                             |\n");
    printf("|                      0.exit                              |\n");
    printf("-----------------------------------------------------------|\n");

    int choice;
    printf("enter choice: ");
    scanf("%d",&choice);
    while(choice!=0)
    {
        switch (choice)
        {
        case 1: printf("\n Length Operation: \n");
                length();
                break;
        case 2: printf("\n Concatenating Operation: \n");
                concatenate();
                break;
        case 3: printf("\n Copy Operation: \n");
                copy();
                 break;
        case 4: printf("\n Reverse Operation: \n");
                reverse();
                break;
        case 5: printf("\n SubString Operation: \n");
                substring();
                break;
        case 6:  printf("\n comparision Operation: \n");
                compare();
                break;
        case 7: printf("\n Lower Case Operation: \n");
                lower();
                break;
        case 8:  printf("\n Upper Case Operation: \n");
                upper();
                break;
        default: printf("enter valid choice!\n");
        }

        printf("enter choice: ");
        scanf("%d",&choice);
    }

    if(choice==0){
        printf("exit");
    }

    return 0;
     
}

void length(){
    getchar();
    printf("\nenter string : ");gets(str1);
    printf("\nlength of \"%s\" : %d\n\n",str1,strlen(str1));
}

void concatenate(){
    getchar();
    printf("enter a string in which you want to concatenate:  "); gets(str1);
    printf("enter a string to concatenate: "); gets(str2);
    printf("\n\"%s\" string was concatenated and result is: \"%s\"\n\n", str2, str1, strcat(str1,str2));
}

void copy(){
    getchar();
    printf("enter string : "); gets(str1);
    strcpy(str2,str1);
    printf("\nstring 1 \"%s\" copied to string 2 and now string 2 is: \"%s\"\n\n", str1, str2);
}

void reverse(){
    getchar();
    printf("enter string: ");gets(str1);
    printf("\nreverse of string is: \"%s\"\n\n",strrev(str1));
}

void substring(){
    getchar();
    printf("enter string: ");gets(str1);
    printf("enter substring: ");gets(str2);
    int result = (int)strstr(str1,str2);
    if(result){
        printf("sub string \"%s\" is found in string \"%s\"\n\n",str2,str1);
    }else{
        printf("sub string \"%s\" is NOT found in string \"%s\"\n\n",str2,str1);
    }
}

void compare(){
    getchar();
    printf("enter 1st String: "); gets(str1);
    printf("enter 2nd String: "); gets(str2);
    int result = strcmp(str1,str2);
    if(result>0)
    {
        printf("\"%s\" is greater than \"%s\"\n\n",str1,str2);
    }
    else if(result<0)
    {
        printf("\"%s\" is greater than \"%s\"\n\n",str2,str1);
    }else{
        printf("\"%s\" is equal to \"%s\"\n\n",str2,str1);
    }

}

void lower(){
    getchar();
    printf("enter string: ");gets(str1);
    int i = 0;
    while(str1[i]!='\0')
    {
        str1[i] = tolower(str1[i]);
        i++;
    }
    printf("lower case: %s\n\n",str1);
}

void upper(){
    getchar();
    printf("enter string : "); gets(str1);
     int i = 0;
    while(str1[i]!='\0')
    {
        str1[i] = toupper(str1[i]);
        i++;
    }
    printf("upper case : %s\n\n",str1);
}