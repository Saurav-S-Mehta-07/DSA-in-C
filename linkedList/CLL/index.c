//Circular Linked list (CLL)-> INSERTION, DELETION, TRAVERSING, SORTING, SEARCHING


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    char data;
    struct node *next;
}Node;

Node *start = NULL, *ptr;

Node *create(Node *);

Node *display(Node *);

Node *insert_beg(Node *);

Node *insert_end(Node *);


int main(){

    start = create(start);
    start = display(start);
    start = insert_beg(start);
    start = display(start);

    return 0;
}

Node *create(Node *start){
   Node *new_node;
   char ch;
   printf("\nenter character data or 0 to exit: "); 
   scanf("%c",&ch);

   while(ch!='0'){
       getchar();

      new_node = (Node *)malloc(sizeof(Node));

      if(new_node == NULL){
        printf("\noverflow");
        return start;
      }

      new_node->data = ch;
      if(start==NULL){
        new_node->next = new_node;
        start = new_node;
      }
      else{
        ptr = start;
        while(ptr->next!=start){
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = start;
      }
    printf("\nenter character data or 0 to exit: "); 
    scanf("%c",&ch);
   }

   if(start==NULL){
       printf("\nYOU ENTERED NO CHARACTERS FOR CLL\n");
       return start;
   }
   printf("\nCLL CREATED\n");
   return start;
}

Node *display(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
   }

    ptr = start;
    printf("\nLIST:");
    while(ptr->next!=start){
        printf("\t%c",ptr->data);
        ptr = ptr->next;
    }
    printf("\t%c",ptr->data);
    return start;
}

Node *insert_beg(Node *start){

    Node *new_node;

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    new_node = (Node *)malloc(sizeof(Node));

    char ch;
    getchar();
    printf("\nenter character data to insert at beginning of CLL: ");
    scanf("%c",&ch);

    new_node->data = ch;

    ptr = start;

    while(ptr->next != start){
        ptr = ptr->next;
    }
    ptr->next =  new_node;
    new_node->next = start;
    start = new_node;
    
    return start;
}
