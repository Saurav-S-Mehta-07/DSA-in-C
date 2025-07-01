//WAP to display lower triangle elements: 


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
    printf("lower triangle elements of matrix : \n\n");
    for(i = 0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
            if(i>=j){
                printf("\t %d",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}