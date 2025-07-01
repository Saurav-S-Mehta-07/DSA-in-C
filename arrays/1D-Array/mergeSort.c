//program for merging two array in sorted order
#include<stdio.h>
int main()
{
    int n1,n2,n3, arr1[10], arr2[10], arr3[30], i;
    printf("enter number of elements for 1 array : ");
    scanf("%d",&n1);

    printf("enter elements for 1 array :\n");
    for(i = 0; i<n1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d",&arr1[i]);
    }

     printf("enter number of elements for 2 array: ");
    scanf("%d",&n2);

    printf("enter elements for 2 array :\n");
    for(i = 0; i<n2; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d",&arr2[i]);
    }

    n3 = n1+n2;
    int indx = 0;
    int j = 0; 
    i = 0;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[indx] = arr1[i];
            i++;
        }
        else{
            arr3[indx] = arr2[j];
            j++;
        }
        indx++;
    }

    if(i==n1){
        while(j<n2){
            arr3[indx] = arr2[j];
            j++;
            indx++;
        }
    }

    if(j==n2){
        while(i<n1){
            arr3[indx] = arr1[i];
            i++;
            indx++;
        }
    }

 printf("1 array is: \n");
    for(i =0; i<n1; i++){
        printf("%d ",arr1[i]);
    }

     printf("\n2 array is: \n");
    for(i =0; i<n2; i++){
        printf("%d ",arr2[i]);
    }


     printf("\n3 array is: \n");
    for(i =0; i<n3; i++){
        printf("%d ",arr3[i]);
    }

   
    return 0;

}