//searching element in array which is already sorted -> binary search

#include<stdio.h>

int arr[20], i, n;

void binarySearch(){
     int num;
     printf("enter number to find: ");
     scanf("%d",&num);
     int start, end, mid;

     start = 0;
     end = n-1;
     mid = (start+end)/2 ;
     while(start<=end)
     {
         if(arr[mid]==num){
            printf("\n%d was found at position %d",num,mid+1);
            break;
         }
         else if(arr[mid]>num)
         {
           end = mid-1;
         }
         else{
            start = mid+1;
         }
         mid = (start+end)/2 ;
     }
     if(start>end)
     {
        printf("\n%d was not found in array",num);
     }
    
}

int main(){
    printf("let's create the array and array must be sorted\n");
    printf("enter number of terms: ");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i = 0; i<n; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    binarySearch();

    return 0;
}