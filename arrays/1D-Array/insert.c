//insert element in array

#include<stdio.h>

int arr[50], n,i;

//insert at begining
void insertStart(){
    printf("\nenter number to insert at begining: ");
    int num;
    scanf("%d",&num);
    for(i=n; i>=0; i--)
    {
       arr[i] = arr[i-1]; 
    }
    arr[0] = num;
    printf("%d was inserted at begining\n", num);
    n++;

    printf("after insertion array elements are: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

//insert at end
void insertend(){
      int num;
      printf("\nenter number to insert end : ");
      scanf("%d",&num);
      arr[n] = num;
      n++;
      printf("%d was inserted at end\n",num);
      
      printf("after insertion array elements are: ");
      for(i = 0; i<n; i++)
      {
        printf("%d ",arr[i]);
      }
}

//insert at any specific position
void insertpos(){
   
     int num, pos;
    printf("\nenter number at specific postion: ");
    scanf("%d",&num);
    printf("enter position : ");
    scanf("%d",&pos);

    if(pos<=n && pos>=0)
    {
         for(i = n; i>pos; i--)
         {
           arr[i] = arr[i-1];
         }
         arr[pos] = num;
         printf("%d was inserted at %d position\n",num,pos);
         n++;
         printf("after insertion array elements are: ");
         for(i = 0; i<n; i++)
        {
           printf("%d ",arr[i]);
        }
   
    }
    else{
        printf("out of range, there is only 0 to %d position in array\n",n);
    }
}


//insert number if array is sorted

void insertSorted(){
    int num, pos;
    printf("enter number to insert: ");
    scanf("%d",&num);
    for(i= 0; i<n; i++)
    {
        if(arr[i]>num){
            printf("hi");
            for(int j = n; j>i; j--)
            {
                printf("i");
                arr[j] = arr[j-1];
            }
            arr[i] = num;
            n++;
            break;
        }
    }
    printf("%d inserted in array\n",num);
    printf("after insertion array elements are: ");
    for(i=0; i<n; i++)
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

    insertStart();
    insertend();
    insertpos();
    // insertSorted();

    return 0;

}