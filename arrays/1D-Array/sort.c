// sorting array -> bubble sort

#include <stdio.h>

int arr[20], i, n;

void sort(){
    for(i = 0; i<n; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("array was sorted\n");
    printf("sorted array elements are: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(){
    printf("let's create the array\n");
    printf("enter number of terms: ");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i = 0; i<n; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    sort();

    return 0;
}