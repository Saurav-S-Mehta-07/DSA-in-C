#include<stdio.h>
#include<stdlib.h>

int i,n;
int *arr;

void create(){
    printf("enter number of elements:  ");
    scanf("%d",&n);
    arr = (int *) malloc(n*sizeof(int));
    printf("enter %d elements\n",n);
    for(i = 0; i<n; i++)
    {
        printf("enter %d element : ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("array created\n");
}

void display(){
    printf("array elements are: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void insertStart(){
    printf("\nenter number to insert at begining: ");
    int num;
    scanf("%d",&num);
    for(i=n; i>=0; i--)
    {
       arr[i] = arr[i-1]; 
    }
    arr[0] = num;
    printf("inserted");
    n++;
    arr = (int *) realloc(arr,n*sizeof(int));
}

void insertend(){
      int num;
      printf("\nenter number to insert end : ");
      scanf("%d",&num);
      n++;
      arr = (int *) realloc(arr,n*sizeof(int));
      arr[n-1] = num;
      printf("inserted\n");
      
}

void insertpos(){
    int num, pos;
    printf("enter number at specific postion: ");
    scanf("%d",&num);
    printf("enter position : ");
    scanf("%d",&pos);

    for(i = n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    printf("inserted\n");
    n++;
    arr = (int *) realloc(arr,n*sizeof(int));
}

void deleteStart(){
    for(i = 0; i<n; i++){
        arr[i] = arr[i+1];
    }
    printf("deleted\n");
    n--;
    arr = (int *) realloc(arr,n*sizeof(int));
}

void deleteEnd(){

    n--;
    arr = (int *)realloc(arr,n*sizeof(int));
    printf("deleted\n");
}

void deletepos(){
    int pos;
    printf("enter postion : ");
    scanf("%d",&pos);

    for(i = pos; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    arr = (int *)realloc(arr,n*sizeof(int));
    printf("deleted\n");
}

void deleteNO(){
    int num;
    printf("enter number: ");
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
            printf("deleted\n");
            n--;
            arr = (int *)realloc(arr,n*sizeof(int));
            break;
        }
    }
    if(flag==0)
    {
        printf("number not found\n");
    }
}

void search(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    int flag = 0;
    for(i = 0; i<n; i++)
    {
        if(arr[i]==num)
        {
            printf("number found at %d position.\n",i+1);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("number not found\n");
    }
}

void mergeTwoArr(){
    printf("create 1st array\n");
    create();
    int arr1[n];
    int n1 = n;
    for(i = 0; i<n; i++){
        arr1[i] = arr[i];
    }
    printf("create 2nd array\n");
    create();
    int arr2[n];
    int n2 = n;
    for(i = 0; i<n; i++)
    {
        arr2[i] = arr[i];
    }
    n = n1+n2;
    arr = (int *)realloc(arr,n*sizeof(int));
    printf("merged array elements are: ");
    int idx = 0;
    for(i = 0; i<n1; i++)
    {
        arr[idx] = arr1[i];
        idx++;
    }
    for(i = 0; i<n2; i++)
    {
        arr[idx] = arr2[i];
        idx++;
    }
    
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main(){
    printf("\nmenu driven\n");
    printf("1. insert Start\n");
    printf("2. insert End\n");
    printf("3. insert at Position\n");
    printf("4. delete Start\n");
    printf("5. delete End\n");
    printf("6. delete position\n");
    printf("7. delete number\n");
    printf("8. search element\n");
    printf("9. merge two array\n");
    printf("10. create array\n");
    printf("11. display array\n");
    printf("0. exit\n");

    int choice;
    while(choice!=0)
    {
        printf("\nenter choice: ");
        scanf("%d",&choice);
       switch (choice)
       {
         case 1: insertStart();
                break;
        case 2: insertend();
                break;
        case 3: insertpos();
                break;
        case 4: deleteStart();
                break;
        case 5: deleteEnd();
                break;
        case 6: deletepos();
                break;
        case 7: deleteNO();
                break;
        case 8: search();
                break;
        case 9: mergeTwoArr();
                break;
        case 10: create();
                break;
        case 11: display();
                break;
        case 0: choice = 0;
                break;
       }
    }

    return 0;
}