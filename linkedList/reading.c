#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;


int main(){
    Node *start, *ptr, *newNode;
    start = NULL;

    int data;
    printf("enter -1 to exit \n");
    printf("enter data: ");
    scanf("%d",&data);

    while(data!=-1){
        newNode = (Node *) malloc(sizeof(Node));
        newNode->data= data;

        if(start == NULL)
        {
            newNode->next = NULL;
            start = newNode;
        }else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
            newNode->next = NULL;
        }

        printf("enter data: ");
        scanf("%d",&data);
    }

    printf("\n data you entered are: \n");
    ptr = start;
    while(ptr != NULL){
        printf("\t%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}