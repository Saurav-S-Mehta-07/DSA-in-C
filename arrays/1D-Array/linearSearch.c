//search element in array -> lenear search

#include<stdio.h>

int arr[20], i, n;

void search(){
    int num;
    printf("enter number to find: ");
    scanf("%d",&num);
    int flag = 0;
    for(i = 0; i<n; i++)
    {
        if(arr[i]==num)
        {
            printf("%d was found at position %d\n",num,i+1);
            flag = 1;
        }
    }
    if(flag ==  0)
    {
        printf("%d was not found in array",num);
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


    search();

    return 0;
    
}