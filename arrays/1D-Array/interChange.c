// interchange the largest and smallest number in an array

//find smallest and largest element in an array

#include<stdio.h>

int arr[20], i, n;

void interChange(int sp, int sl){
    printf("\nbefore interchange, array elements are: ");
    for(i =0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    int temp = arr[sp];
    arr[sp] = arr[sl];
    arr[sl] = temp;

    printf("\nafter interchange, array elements are: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void smallLarge(){
    int sp=0, sl=0, small, large;
    small = large = arr[0];
    for(i = 0; i<n; i++)
    {
        if(small>arr[i]){
            small = arr[i];
            sp = i;
        }
        if(large<arr[i]){
            large = arr[i];
            sl = i;
        }
    }
    printf("\nsmallest number is %d at position %d.",small, sp);
    printf("\nand largest number is %d at position %d.\n",large,sl);
    interChange(sp,sl);
    printf("\n\nnow, smallest number is %d at position %d.",small, sl);
    printf("\nand largest number is %d at position %d.",large,sp);

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

    smallLarge();

    return 0;

}