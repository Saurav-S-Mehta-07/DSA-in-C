//WAP to change the diagonal element to zero.



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
    printf("diagonal elements of matrix : \n\n");
    for(i = 0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
            if(i==j){
                arr[i][j] = 0;
                printf("\t %d",arr[i][j]);
            }
            else{
                printf("\t %d",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}