//WAP to find the largest element in 2D array


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
    int large = arr[0][0];
    int max = arr[1][0];
    printf("matrix : \n\n");
    for(i = 0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
            printf("\t %d",arr[i][j]);
            if(large<arr[i][j]){
                large = arr[i][j];
            }
        }

        if(max<large){
            max = large;
        }

        printf("\n");
    }
    printf("\n");

    printf("largest number in array is %d.",max);
    return 0;
}