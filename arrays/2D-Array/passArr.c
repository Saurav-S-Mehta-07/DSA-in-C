//WAP to display and set 2D array elements using funciton

#include<stdio.h>

void func(int arr[5][5], int r){
    for(int i = 0; i<r; i++){
        for(int j = 0; j<r;j++){
            if(i==j){
                arr[i][j] = 0;
            }
            else if(i>j){
                arr[i][j] = -1;
            }
            else{
                arr[i][j]=1;
            }
        }
    }
}

void display(int arr[5][5],int r){
    printf("array elements are: \n\n");
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++){
            printf("\t %d",arr[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
}

int main(){
    int i,j,r;
    printf("enter r and c: ");
    scanf("%d",&r);

    int arr[r][r];

    func(arr,r);
    display(arr,r);

    return 0;
}