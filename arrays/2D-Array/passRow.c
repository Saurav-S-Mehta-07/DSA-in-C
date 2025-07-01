//passing a row of 2D array in function
#include<stdio.h>

void func(int arr[]){
    for(int i = 0; i<5; i++)
    {
        arr[i] = arr[i] *10;
    }
}

int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    func(arr[0]);

    printf("array elements are: \n");
    for(int i = 0; i<2; i++)
    {
        for(int j= 0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
    }

    return 0;
}