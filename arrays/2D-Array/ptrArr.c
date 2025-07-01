//WAP to display 2D array elements using pointer

#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int (*ptr)[3];
    ptr = arr;

    printf("array elements are: \n\n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++){
            printf("\t %d", *(*(ptr+i)+j)); //ptr[i][j] 
        }
        printf("\n\n");
    }
    printf("\n");
    return 0;
}