//Circular doubly linked list (CDLL)

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}Node;

Node *start = NULL;
Node *ptr;

Node * create(Node *);

Node *display(Node *);

Node *insert_beg(Node *);

int main(){

    start = create(start);
    start = display(start);
    start = insert_beg(start);
    start = display(start);
    start = insert_beg(start);
    start = display(start);
    return 0;

}

Node *create(Node *start){

    Node *new_node;
    
    int data;
    printf("\nenter data: ");
    scanf("%d",&data);

    while(data!=0){

        if(start ==  NULL){
            new_node = (Node *)malloc(sizeof(Node));
            start = new_node;
            new_node->prev = new_node;
            new_node->data = data;
            new_node->next = new_node;
        }
        else{
            new_node = (Node *)malloc(sizeof(Node));
            new_node->data = data;
             ptr = start;
             while(ptr->next!=start){
                ptr = ptr->next;
             }
             new_node->prev = ptr;
             ptr->next = new_node;
             new_node->next = start;
             start->prev = new_node;
        }
        printf("\nenter data: ");
        scanf("%d",&data);
        
    }
    printf("\nCREATED\n");
    return start;
}

Node *display(Node *start){
    ptr = start;
    while(ptr->next!=start){
      printf("\t%d",ptr->data);
      ptr = ptr->next;
    }
    printf("\t%d",ptr->data);

    return start;
}

Node *insert_beg(Node *start){
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));

    int data;
    printf("\nenter data: ");
    scanf("%d",&data);

    new_node->data = data;

    new_node->prev = start->prev;
    new_node->next = start;
    start->prev->next = new_node;
    start->prev = new_node;
    start = new_node;

    return start;

}
