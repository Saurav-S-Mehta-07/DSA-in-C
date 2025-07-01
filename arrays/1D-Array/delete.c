//delete element from array

#include<stdio.h>

int arr[50], n, i;

//delete from begining
void deleteStart(){
    int num = arr[0];
    for(i = 0; i<n; i++){
        arr[i] = arr[i+1];
    }
    printf("\n%d was deleted\n",num);
    n--;
    printf("after deletion array elements are: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

//delete form end
void deleteEnd(){
    int num = arr[n-1];
    n--;
    printf("\n%d was deleted\n",num);
     printf("after deletion array elements are: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

//delete from position
void deletepos(){
    int pos;
    printf("\nenter postion to delete number : ");
    scanf("%d",&pos);

    if(pos<=n && pos>=0)
    {
     int num = arr[pos];

     for(i = pos; i<n; i++)
      {
        arr[i] = arr[i+1];
      }
     n--;
     printf("%d was deleted\n",num);
     printf("after deletion array elements are: ");
     for(i = 0; i<n; i++)
     {
        printf("%d ",arr[i]);
     }
    }
    else{
        printf("%d pos out of range, there is only 0 to %d position in array\n",pos,n);
    }

 
}

//delete by search number
void deleteNO(){
    int num;
    printf("\nenter number to delete: ");
    scanf("%d",&num);
    int flag = 0;
    for(i = 0; i<n; i++)
    {
        if(arr[i]==num){
            for(int j = i; j<n; j++)
            {
                arr[j] = arr[j+1];
                flag = 1;
            }
            printf("%d was deleted\n",num);
            n--;
            break;
        }
    }

    if(flag==0)
    {
        printf("number not found\n");
    }else{
        printf("after deletion array elements are: ");
        for(i = 0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
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

    deleteStart();
    deleteEnd();
    deletepos();
    deleteNO();

    return 0;
}
