#include<stdio.h>

void insert(){

     char str[100], sub[50];

    getchar();

    printf("enter string: ");gets(str);
    printf("enter substring: ");gets(sub);

    printf("\nstr = \"%s\" and sub string = \"%s\" \n",str,sub);

    char newStr[100];
    int pos;
    printf("enter position: ");
    scanf("%d",&pos);


    int i = 0, j = 0,k=0;

    while(str[i]!='\0'){
        if(i==pos)
        {
            while(sub[k]!='\0'){
                newStr[j] = sub[k];
                j++;
                k++;
            }
        }
        else{
            newStr[j]=str[i];
            j++;
        }
        i++;
    }
    newStr[j] = '\0';

   printf("new stirng = %s\n",newStr);

}

void dltSub(){

   char str[100], sub[20], newText[100];


    int i = 0, j,k,found = 0,copy_loop = 0,n=0;

    getchar();

    printf("enter string: ");gets(str);
    printf("enter sub string: ");gets(sub);
  
    printf("\nstr = \"%s\" and sub string = \"%s\" \n",str,sub);


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
}

void replace(){
     char str[100], sub[50],replace[50],newStr[100];

     getchar();
    printf("enter string: ");gets(str);
    printf("enter substring: ");gets(sub);
    printf("enter replacing string: ");gets(replace);

    printf("\nstr = \"%s\" and sub string = \"%s\" \n",str,sub);


    int i = 0,j,k, found=0, n=0, copy_loop=0, r=0;

    while(str[i]!='\0')
    {
        j=0; k=i;
        while(str[k]==sub[j] && sub[j]!='\0')
        {
            k++;
            j++;
        }
        if(sub[j]=='\0')
        {
            copy_loop = k;
            found = 1;
            while(replace[r]!='\0'){
                newStr[n] = replace[r];
                n++;
                r++;
            }
        }
        newStr[n] = str[copy_loop];
        n++;
        copy_loop++;
        i++;
    }
    if(found == 0){
        printf("sub string is not found");
    }
    else{
        newStr[n] = '\0';
        printf("new String is : %s\n",newStr);
    }
    
}


int main(){
    
    printf("\n******MENU******\n");
    printf("1> insert sub string.\n");
    printf("2> delete substring : \n");
    printf("3> replace substring: \n");
    printf("4> exit\n");

    int choice;
    
    while(1)
    {
        printf("\nenter choice: ");
        scanf("%d",&choice);
       switch(choice)
       {
         case 1: insert();
                 break;
         case 2: dltSub();
                 break;
         case 3: replace();
                 break;
         case 0: return -1;
                 break;
         default: printf("invalid choice!");
                 
       }    
       
       
    }



    return 0;
}