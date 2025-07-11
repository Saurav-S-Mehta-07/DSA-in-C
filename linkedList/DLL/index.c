//Doubly linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}Node;

Node *start = NULL;
Node *ptr;

Node *create(Node *);

Node *display(Node *);

Node *insert_beg(Node *);

Node *insert_end(Node *);

Node *insert_after(Node *);

Node *insert_before(Node *);

Node *delete_beg(Node  *);

Node *delete_end(Node *);

Node *delete_after(Node *);

Node *delete_before(Node *);

Node *delete_node(Node *);

Node *delete_list(Node *);


int main(){

 

    start = create(start);
    start = display(start);
    start = delete_list(start);
    start = display(start);
   
  

    return 0;

}

Node *create(Node *start){
    Node *new_node;

    ptr = start;
    int data;
    printf("enter data or -1 to exit: ");
    scanf("%d",&data);

    while(data!=-1){
       
        new_node = (Node *)malloc(sizeof(Node));

        new_node->data = data;

        if(start == NULL){
            new_node->prev = NULL;
            new_node->next = NULL;
            start = new_node;
        }else{
            ptr = start;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node ->next = NULL;  
        }

        printf("enter data or -1 to exit: ");
        scanf("%d",&data);
    }

    return start;

}

Node *display(Node *start){
    ptr = start;
    while(ptr!=NULL){
           printf("%d\t",ptr->data);
           ptr = ptr->next;
    }

    return start;
}

Node *insert_beg(Node *start){

          int n;
          printf("\nenter value to insert: ");
          scanf("%d",&n);

          Node *new_node;
          new_node = (Node *)malloc(sizeof(Node));

          new_node->data =  n;

          new_node->prev = NULL;

          new_node->next = start;
          
          start = new_node;

          return start;
}

Node *insert_end(Node *start){

    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));

    int n;
    printf("\nenter value to insert: ");
    scanf("%d",&n);

    new_node->data = n;
    new_node->next = NULL;
   ptr = start;
   while(ptr->next!=NULL){
    ptr = ptr->next;
   }
   ptr->next = new_node;
   new_node->prev = ptr;

   return start;
}

Node *insert_after(Node *start){

       Node *new_node;
       new_node = (Node  *)malloc(sizeof(Node));
        ptr = start;

        int val;
        printf("\nenter value: "); scanf("%d",&val);
        int n;
        printf("\nenter data : ");scanf("%d",&n);

        new_node->data = n;
   
        while(ptr->data!=val){
            ptr = ptr->next;
        }

        new_node->next = ptr->next;
        ptr->next = new_node;
        new_node->prev = ptr;
  
        return start;
       
}

Node *insert_before(Node *start){
       Node *new_node;
       new_node = (Node  *)malloc(sizeof(Node));
        ptr = start;

        int val;
        printf("\nenter value: "); scanf("%d",&val);
        int n;
        printf("\nenter data : ");scanf("%d",&n);

        new_node->data = n;
   
        while(ptr->data!=val){
            ptr = ptr->next;
        }

        new_node->next = ptr;
        new_node->prev = ptr->prev;
        ptr->prev->next = new_node;
        ptr->prev = new_node;
  
        return start;
}

Node *delete_beg(Node  *start){
    ptr = start;

    if(start->next != NULL){
      start = start->next;
      start->prev = NULL;
      free(ptr);
      return start;
    }

    start = NULL;
    free(ptr);
    return start;
}

Node *delete_end(Node *start){
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }

        ptr->prev->next = NULL;
        free(ptr);
        printf("\n");

        return start;
}

Node *delete_after(Node *start){
    ptr = start;
    int val;
    printf("\nenter data: ");
    scanf("%d",&val);

    while(ptr->data != val){
        ptr = ptr->next;
    }
    
    Node *temp;
    temp = ptr->next;
    ptr->next = temp->next;

    if(temp->next!=NULL){
        temp->next->prev = ptr;   
    }

    free(temp);
    return start;
}

Node *delete_before(Node *start){
    ptr = start;
    int val;
    printf("\nenter data: ");
    scanf("%d",&val);

    while(ptr->data != val){
        ptr = ptr->next;
    }
    
    Node *temp;
    temp = ptr->prev;
    if(temp == start){
        start = delete_beg(start);
    }else{
       ptr->prev = temp->prev;
       temp->prev->next = ptr;  
       free(temp);
    }

    return start;
}


Node *delete_node(Node *start){
    ptr = start;
     int val;
     printf("\nenter value: ");
     scanf("%d",&val);

     while(ptr->data!=val){
        ptr = ptr->next;
     }

     ptr->next->prev = ptr->prev;
     ptr->prev->next = ptr->next;
     free(ptr);

     return start;
}

Node *delete_list(Node *start){
    while(start!=NULL){
        start = delete_beg(start);
    }
    printf("\ndeleted");
    return start;
}
