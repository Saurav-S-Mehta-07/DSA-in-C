//WAP, using array of pointers to a structure, to read and display the data of students.

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char name[50];
    int roll_no;
}Student;

Student *ptr_Std[20];

int main()
{
    int i, n;
    printf("enter number of students: "); scanf("%d",&n);

    for(i = 0; i<n; i++)
    {
        ptr_Std[i] = (Student *)malloc(sizeof(Student));
        printf("\nenter roll no of %d student: ",i+1); scanf("%d",&ptr_Std[i]->roll_no);
        getchar();
        printf("enter name of %d student: ",i+1); gets(ptr_Std[i]->name);
    }

    printf("\n student details\n");
    for(i = 0; i<n; i++)
    {
        printf("%d -> %s.\n",ptr_Std[i]->roll_no, ptr_Std[i]->name);
    }

    return 0;
}
