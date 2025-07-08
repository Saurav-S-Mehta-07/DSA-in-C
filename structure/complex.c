//WAP to read, display, add and subtract two complex numbers.

#include<stdio.h>

typedef struct 
{
    int real;
    int img;
} complex;

complex c1, c2;

void create();
void display();
void addition();
void subtraction();

int main(){
    
    int choice;
     printf("\n|----------------------------------------------------------|\n");
    printf("|                        MENU                              |");
    printf("\n|----------------------------------------------------------|\n");
    printf("\n");
    printf("|                      1.create                            |\n");
    printf("|                      2.diplay                            |\n");
    printf("|                      3.addition                          |\n");
    printf("|                      4.subtration                        |\n");
    printf("|                      5.exit                              |\n");
    printf("-----------------------------------------------------------|\n");

    do{
        
        printf("\nenter choice: ");
        scanf("%d",&choice);

        switch (choice)
        {

        case 1: printf("\ncreate complex numbers\n");
                create();
                break;

        case 2: printf("\ndisplay complex numbers\n");
                display();
                break;

        case 3: printf("\naddition of complex numbers\n");
                addition();
                break;

        case 4: printf("\nsubtraction of complex numbers\n");
                subtraction();
                break;

        case 5: printf("\nExit\n");
                break;
        default: printf("choice is invalid!\n");                                                                       
        }

    }while (choice!=5);
  
    return 0;
}

void create()
{
    printf("hey, user let's create complex numbers\n");
    printf("\nenter real and imginary part for 1st number: ");
    scanf("%d %d",&c1.real,&c1.img);
    printf("\nenter real and imginary part for 2nd number: ");
    scanf("%d %d",&c2.real,&c2.img);
    printf("\nuser, your complex numbers were created.\n");
}

void display(){
    printf("\nokay! User your created complex numbers are: \n");

    if(c1.img<0)
    {
      printf("1st number: %d%di\n",c1.real,c1.img);
    }else{
     printf("1st number: %d+%di\n",c1.real,c1.img);
    }

    if(c2.img<0){
       printf("2nd number: %d%di\n",c2.real,c2.img);
    }else{
        printf("2nd number: %d+%di\n",c2.real,c2.img);
    }
}

void addition(){
    int aReal = c1.real + c2.real;
    int aImg = c1.img + c2.img;

    if(aImg>=0)
    {
        printf("sum = %d+%di",aReal, aImg);
    }else{
        printf("sum = %d%di",aReal,aImg);
    }
}


void subtraction(){
    int sReal = c1.real - c2.real;
    int sImg = c1.img - c2.img;

    if(sImg>=0)
    {
        printf("sub = %d+%di",sReal, sImg);
    }else{
        printf("sub = %d%di",sReal,sImg);
    }
}