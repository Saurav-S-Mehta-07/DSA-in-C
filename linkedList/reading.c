#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

Node *start = NULL;
Node *ptr;


void create();

void display();

void search();


int main(){

    create();
    display();
    search();

    return 0;
}

void create(){
    Node *newNode;
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
}

void display(){ 
    printf("\n entered data items are \n");
    ptr = start;
    while(ptr != NULL){
        printf("\t%d ",ptr->data);
        ptr = ptr->next;
    }
}

void search(){
    int data;
    printf("\nenter data item: ");
    scanf("%d",&data);

    ptr = start;

    Node *pos = NULL;

    while(ptr!=NULL)
    {
        if(ptr->data == data)
        {
            pos = ptr;
            break;
        }
        ptr = ptr->next;
    }
    if(pos==NULL){
        printf("data item not found in list\n");
    }else{
        printf("found in list and stored in pos(%d):%d",pos,pos->data);
    }

}


