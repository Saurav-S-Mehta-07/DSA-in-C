//WAP to read and display the information of a student using a nested structure.

#include<stdio.h>

typedef struct
{
    char f_name[20];
    char m_name[20];
    char l_name[20];
}name;

typedef struct
{
     int day;
     int month;
     int year;
}dob;

typedef struct 
{
    name n1;
    int class;
    int roll_no;
    dob d1;
}student;


int main(){

    student std1;

    printf("enter student's full name: ");
    scanf("%s %s %s",std1.n1.f_name, std1.n1.m_name, std1.n1.l_name);
    printf("enter student's class: ");
    scanf("%d",&std1.class);
    printf("enter roll no of student: ");
    scanf("%d",&std1.roll_no);
    printf("enter date of brith of student: ");
    scanf("%d %d %d",&std1.d1.day, &std1.d1.month, &std1.d1.year);

    printf("\nstudent's details\n");
    printf("name:%s %s %s\n",std1.n1.f_name, std1.n1.m_name, std1.n1.l_name);
    printf("class: %d\n",std1.class);
    printf("roll no.: %d\n",std1.roll_no);
    printf("dob: %d-%d-%d\n",std1.d1.day, std1.d1.month, std1.d1.year);

    return 0;
}