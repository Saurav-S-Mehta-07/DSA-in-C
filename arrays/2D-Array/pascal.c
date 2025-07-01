//Pascal's triangle

#include<stdio.h>
int main(){


    int arr[7][7]={0};
    int r = 2, c, i, j;

    arr[0][0] = arr[1][0] = arr[1][1] = 1;

    while(r<=7)
    {
        arr[r][0] = 1;
        for(c = 1; c<=r; c++)
        {
            arr[r][c] = arr[r-1][c-1]+ arr[r-1][c];
        }
        r++;
    }

    for(i = 0; i<7; i++)
    {

        for(j = 0; j<=i; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }

    return 0;
}