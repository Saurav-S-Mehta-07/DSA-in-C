//WAP to intialize the members of a structure by using a pointer to the structure.
#include<stdio.h>

int main()
{
    typedef struct
    {
        char name[30];
        int roll_no;
        char course[30];
        float fees;
    }student;

    student *ptr, std;
    ptr = &std;
    
   printf("enter detail of a student\n");
   printf("enter name: "); gets(ptr->name);
   printf("enter course: "); gets(ptr->course);
   printf("enter roll no.: "); scanf("%d",&ptr->roll_no);
   printf("enter fee: "); scanf("%f",&ptr->fees);

   printf("name: %s, rollno. : %d\n",ptr->name, ptr->roll_no);
   printf("course: %s, fees: %.3f\n",ptr->course, ptr->fees);
    return 0;
}