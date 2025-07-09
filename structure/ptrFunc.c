//WAP that passes a pointer to a structure to a function.

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[40];
    int roll_no;
    char course[30];
}Student;

void display(Student *);

int main()
{
   Student *ptr;
   ptr = (Student *)malloc(sizeof(Student));

   printf("enter name: ");gets(ptr->name);
   printf("enter roll no: ");scanf("%d",&ptr->roll_no);
   getchar();
   printf("enter course: ");gets(ptr->course);

   display(ptr);
   return 0;
}

void display(Student *ptr){
    printf("\nname: %s\n",ptr->name);
    printf("roll no.: %d\n",ptr->roll_no);
    printf("course: %s\n",ptr->course);
}