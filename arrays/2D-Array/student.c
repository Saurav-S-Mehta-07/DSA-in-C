/*WAP to read a 2D array marks which stores the marks of n students in n subjects.
WAP to display teh highest marks in each subject.*/

#include<stdio.h>
int main()
{
    int std,sub;
    printf("enter number of students: ");
    scanf("%d",&std);
    printf("enter number of subjects: ");
    scanf("%d",&sub);

    int arr[std][sub], i, j;

    printf("enter marks of students\n");
    for(i = 0; i<std; i++){
        printf("enter marks of student %d:\n",i+1);
        for(j = 0; j<sub; j++){
            printf("%d sub: ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    int highest = 0;
    for(i=0; i<sub; i++)
    {
        for(j = 0; j<std; j++)
        {
            if(arr[j][i]>highest)
            {
                highest = arr[j][i];
            }
        }
        printf("highest marks in %d subject is: %d\n",i+1,highest);
        highest = 0;
    }

    return 0;
}