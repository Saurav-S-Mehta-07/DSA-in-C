//print the elements of 2d array

#include<stdio.h>
int main(){
       
    // int arr[2][3] = {1,2,3,4,5,6};
    // int arr[2][3] = {{1,2},{3,4},{5,6}};
    // int arr[2][3] = {0};

    int arr[2][3], i,j;
    printf("enter elements for array: \n");
    for(i = 0; i<2; i++){
        for(j=0; j<3; j++)
        {
          printf("arr[%d][%d]: ",i,j);
          scanf("%d",&arr[i][j]);
        }
    }
    
    printf("2d array elements are: \n");
    for(i = 0; i<2; i++){
        for(j=0; j<3; j++)
        {
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}