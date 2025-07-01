//WAP to  input two m x n matrices and then calculate the sum.

#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("\nlet's start:\n");
    printf("enter number of rows and columns for matrix 1: \n");
    scanf("%d%d",&r1,&c1);    
    printf("enter number of rows and columns for matrix 2: \n");
    scanf("%d%d",&r2,&c2);

    int m1[r1][c1], m2[r2][c2], result[r1][c1];


    printf("\nenter the elements of the 1 matrix: \n");
    for(i =0; i<r1; i++)
    {
        for(j =0; j<c1; j++)
        {
            printf("m1[%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
   


    printf("\nenter the elements of the 2 matrix: \n");
    for(i =0; i<r2; i++)
    {
        for(j =0; j<c2; j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }



    printf("1 matrix is: \n\n");
    for(i = 0; i<r1; i++)
    {
        for(j =0; j<c1; j++)
        {
          printf("\t %d",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    printf("2 matrix is: \n\n");
    for(i = 0; i<r2; i++)
    {
        for(j =0; j<c2; j++)
        {
          printf("\t %d",m2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    

    if(r1!=r2 || c1!=c2)
    {
        printf("addition of matrices is not possible\n");
    }
    else{

        printf("additon of matrices is: \n\n");

        for(i =0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                result[i][j] = m1[i][j] + m2[i][j];
                printf("\t %d",result[i][j]);
            }
            printf("\n");
        }

        // for(i = 0; i<r1; i++)
        // {
        //     for(j =0; j<c1; j++)
        //     {
        //         printf("\t %d",result[i][j]);
        //     }
        //     printf("\n");
        // }
    }

    return 0;
}