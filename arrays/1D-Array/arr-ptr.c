//operation on array using pointer

#include<stdio.h>

void printArr(int *ptr, int n);

void changeEl(int *ptr);

void pointerClac(int *ptr1, int *ptr2){
            printf("\nptr2 - ptr1 = %d", ptr2 - ptr1);

            printf("\nfrom %d to %d elements are: ",*ptr1, *ptr2);

            while(ptr1<=ptr2)
            {
                printf("%d ",*ptr1);
                ptr1++;
            }
}

int main(){
   int arr[] = {1,2,9,4,5};
   int i, n = 5;

   printArr(arr,n);

   changeEl(&arr[2]);
    printf("\nafter changeEl() call array elements are: ");
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }

    pointerClac(arr, &arr[3]);

   return 0;
}


void printArr(int *ptr, int n){
    printf("array elements are: ");
    for(int i = 0; i<n; i++){

        // printf("%d ",*ptr);
        // ptr++;

        printf("%d ",ptr[i]);

        // printf("%d ",*(ptr+i));
    }
}

void changeEl(int *ptr){
    *ptr = -1;
    *(ptr+1) = *ptr + 1;
    ptr++;
    *ptr = 7; 
}