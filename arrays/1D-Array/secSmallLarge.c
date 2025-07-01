//find the 2nd largest and 2nd smallest element in array

#include<stdio.h>

int arr[20], i, n;

void secLargest(){
     int large = arr[0], pos=0, secLarge = arr[0], posSec = 0;

     for(i = 0; i<n; i++){
          if(large<arr[i]){
            large = arr[i];
            pos = i;
          }
     }


     if(arr[pos]==arr[0]){
        secLarge = arr[1];
        posSec = 1;
     }

     for(i = 0; i<n; i++){
        if(arr[i]!=large){
            if(arr[i]>secLarge){
                secLarge = arr[i];
                posSec = i;
            }
        }
     }

     printf("\nsecond largest number in array is : %d at position %d.", secLarge,posSec);
}

void secSmallest(){
    int small = arr[0], pos=0, secSmallest = arr[0], posSec = 0;

     for(i = 0; i<n; i++){
          if(small>arr[i]){
            small = arr[i];
            pos = i;
          }
     }


     if(arr[pos]==arr[0]){
        secSmallest = arr[1];
        posSec = 1;
     }
     
     for(i = 0; i<n; i++){
        if(arr[i]!=small){
            if(arr[i]<secSmallest){
                secSmallest = arr[i];
                posSec = i;
            }
        }
     }

     printf("\nsecond smallest number in array is : %d at position %d.", secSmallest,posSec);
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

    secSmallest();
    secLargest();

    return 0;
}