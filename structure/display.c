//WAP using structure to read and display the information of a student

#include<stdio.h>

    typedef struct 
    {
        char name[30];
        int roolNo;
        float fees;
        char course[30];
    }student;

int main()
{
   student s1;
   printf("enter name of the student: ");
   gets(s1.name);
   printf("enter roll number of student: ");
   scanf("%d",&s1.roolNo);
   printf("enter fee of student: ");
   scanf("%f",&s1.fees);
   getchar();
   printf("enter course of student: ");
   gets(s1.course);

   printf("\nStudent's details\n");
   printf("\tname:%s\troll no.: %d\t fees:%.3f\t course:%s\t",
                  s1.name, s1.roolNo, s1.fees, s1.course);
                  
    return 0;
}