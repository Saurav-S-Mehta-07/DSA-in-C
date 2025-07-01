//write a program to transpose a 3X3 matrix.

#include<stdio.h>
int main(){
    int i,j, arr[3][3];
    printf("\nenter the elements of the matrix: \n");
    for(i =0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix of 3x3 is: \n\n");
    for(i = 0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
          printf("\t %d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\ntranspose of matrix is : \n\n");
    for(i =0; i<3; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf("\t %d",arr[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}