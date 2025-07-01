//array of pointer

#include <stdio.h>
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {0,2,4,3,6};
    int arr3[] = {1,4,6,8,9};

    int *parr[3] = {arr1, arr2, arr3};
    //parr is the array of pointer in which address of 3 intger vlaue can be stored
    //and here in parr the base address of 3 array are stored that why output is 1 0 1

    int i;

    for(i = 0; i<3; i++)
    {
        printf("%d ", *parr[i]);
    }

    return 0;
}