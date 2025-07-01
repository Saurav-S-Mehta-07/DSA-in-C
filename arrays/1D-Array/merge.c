//merge two array

#include<stdio.h>

int arr1[20], arr2[20], arr3[40], n1,n2,n3 ,i,indx = 0;

void merge(){
     for(i = 0; i<n1; i++)
     {
        arr3[indx] = arr1[i];
        indx++;
     }
     for(i = 0; i<n2; i++)
     {
        arr3[indx] = arr2[i];
        indx++;
     }
     n3 = n1 + n2;
     printf("\nmerged array elements are: ");
     for(i  = 0; i<n3; i++)
     {
        printf("%d ",arr3[i]);
     }
}

int main()
{

    printf("let's create the 1st array\n");
    printf("enter number of terms for 1st array: ");
    scanf("%d",&n1);
    printf("enter elements\n");
    for(i = 0; i<n1; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr1[i]);
    }

    printf("let's create the 2nd array\n");
    printf("enter number of terms for 2nd array: ");
    scanf("%d",&n2);
    printf("enter elements\n");
    for(i = 0; i<n2; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr2[i]);
    }


    merge();

    return 0;

}