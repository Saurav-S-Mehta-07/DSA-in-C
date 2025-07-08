/*WAP to read and display the information of all the students in a class. 
  Then edit the details of the ith student and redisplay the entire information. */

#include<stdio.h>

typedef struct 
{
    char name[50];
    int roll_no;
    char favSub[50];
}student;

student std[50];
int n, i;

void createRegister();

void edit();

int main()
{
    
    printf("\nWelcome User\n");

    printf("enter 1 for Create Register\n");
    printf("enter 2 for Edit Register\n");
    printf("enter 0 for exit!\n");

    int choice;
    printf("enter choice : ");
    scanf("%d",&choice);
   
    while(choice!=0)
    {
       switch (choice)
       {
        case 1: createRegister();
                break;
        case 2: edit();
                break;
        default: printf("invalid choice!\n");
       }

        printf("enter choice or 0 to exit : ");
        scanf("%d",&choice);

    }
    
    return 0;
}

void createRegister(){
    printf("\nenter number of student in a class: ");
    scanf("%d",&n);

    printf("enter %d students details\n",n);
    for(i=0; i<n; i++)
    {
        printf("\nenter roll no of %d std: ",i+1);
        scanf("%d",&std[i].roll_no);
        getchar();
        printf("enter name of %d std: ",i+1); gets(std[i].name);
        printf("enter fav. sub of std: ");gets(std[i].favSub);
    }

    printf("\n********************student's details***********************\n\n");
    for(i=0; i<n; i++)
    {
        printf("          %d       %s  ->  favSub(%s)\n",
             std[i].roll_no, std[i].name, std[i].favSub);
    }
}

void edit(){
    
    printf("\nenter -1 for exit!\n");

    int edit, flag = 0;
    printf("\nenter roll no of student whose record has to be edited: ");
    scanf("%d",&edit);

    do{
        
        for(i = 0; i<n; i++)
        {
           if(std[i].roll_no == edit)
           {
            flag = 1;
            printf("roll no : \"%d\", name: \"%s\", and fav subject is: \"%s\"\n",std[i].roll_no, std[i].name,std[i].favSub);
            printf("enter new roll no.: ");
            scanf("%d",&std[i].roll_no);
            getchar();
            printf("enter new name: ");gets(std[i].name);
            printf("enter new fav subject: ");gets(std[i].favSub);
            break;
         }
        }
        if(flag==0)
        {
           printf("this roll no. is not present!");
        }
        else{
            printf("\n********************student's details***********************\n\n");

               for(i=0; i<n; i++)
               {
                 printf("          %d       %s  ->  favSub(%s)\n",
                 std[i].roll_no, std[i].name, std[i].favSub);
               }
            }

        printf("\nenter roll no of student whose record has to be edited or -1 to exit: ");
        scanf("%d",&edit);
        flag = 0;
    }while(edit!=-1);
}
