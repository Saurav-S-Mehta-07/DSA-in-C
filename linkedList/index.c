#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

Node *start = NULL;
Node *ptr;


Node  *create(Node *);

Node *display(Node *);

Node *search(Node *);

Node *insert_beg(Node *);

Node *insert_end(Node *);

Node *insert_after(Node *);

Node *insert_before(Node *);

Node *delete_beg(Node *);



int main(){

    start = create(start);
    start = display(start);
    // start = search(start);
    // start = insert_beg(start);
    // start = insert_end(start);
    start = insert_after(start);
    // start = insert_before(start);
    start = display(start);
    // start = search(start);



    return 0;
}

Node *create(Node *start){
    Node *new_node;
    int data;
    printf("enter -1 to exit \n");
    printf("enter data: ");
    scanf("%d",&data);

    while(data!=-1){
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data= data;

        if(start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }

        printf("enter data: ");
        scanf("%d",&data);
    }

    return start;
}

Node *display(Node *start){ 
    printf("\n entered data items are \n");
    ptr = start;
    while(ptr != NULL){
        printf("\t%d ",ptr->data);
        ptr = ptr->next;
    }
    return start;
}

Node *search(Node *start){
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
        printf("found in list and that item stored at : %d",pos);
    }
   return start;
}

Node *insert_beg(Node *start){
    Node *new_node;
    int data;
    printf("\nenter data to insert at begining: ");
    scanf("%d",&data);

    new_node = (Node *) malloc(sizeof(Node));

    if(new_node==NULL)
    {
        printf("\noverflow");
        return start;
    }

    new_node->data = data;

    new_node->next = start;

    start = new_node;

    return start;
}

Node *insert_end(Node *start){
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    int data;
    printf("\nenter data:");
    scanf("%d",&data);

    new_node->data = data;
    new_node->next = NULL;

    ptr = start;
    while(ptr->next!=NULL){
         ptr = ptr->next;
    }
    ptr->next = new_node;

    return start;
};

Node *insert_after(Node *start){
      Node *new_node, *pptr;
      int val,data;
      printf("\netner Value: ");
      scanf("%d",&val);

      printf("enter data: ");
      scanf("%d",&data);

      new_node = (Node *)malloc(sizeof(Node));

      new_node->data = data;
       
      pptr = ptr = start;

      while(pptr->data != val){
        if(pptr->next==NULL){
        printf("\ndata item not in list");
        return start;
        }
        pptr = ptr;
        ptr = ptr->next;
      }
      pptr->next = new_node;
      new_node->next = ptr;
      return start;
}

Node *insert_before(Node *start){
         Node *new_node, *pptr;
         pptr = ptr = start;

         new_node = (Node *)malloc(sizeof(Node));

         int val, data;
         printf("\nenter val: ");
         scanf("%d",&val);
         printf("enter data: ");
         scanf("%d",&data);

         new_node->data = data;

         while(ptr->data != val){
            if(ptr->next==NULL){
                printf("\ndata item not in list");
                return start;
            }
            pptr = ptr;
            ptr = ptr->next;
         }


         if(pptr==start){
            new_node->next=start;
            start = new_node;
         }else{
             pptr->next = new_node;
             new_node->next = ptr;
         }

         return start;
}
