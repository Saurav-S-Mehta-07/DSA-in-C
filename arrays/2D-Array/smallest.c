//WAP to find the smallest element in 2D array


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
    int small = arr[0][0];
    int min = arr[1][0];
    printf("matrix : \n\n");
    for(i = 0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
            printf("\t %d",arr[i][j]);
            if(small>arr[i][j]){
                small = arr[i][j];
            }
        }

        if(min>small){
            min = small;
        }

        printf("\n");
    }
    printf("\n");

    printf("samllest number in array is %d.",min);
    return 0;
}