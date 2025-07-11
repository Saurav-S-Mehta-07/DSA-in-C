//Singly Linked list (SLL)-> INSERTION, DELETION, TRAVERSING, SORTING, SEARCHING

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

Node *delete_end(Node *);

Node *delete_node(Node *);

Node *delete_list(Node *);

Node *delete_after(Node *);

Node *sort_list(Node *);

int main(){

    printf("\n************************************************************************");
    printf("\n*                           MENU                                       *");
    printf("\n*                                                                      *");
    printf("\n*  1  -> create         2  -> display          3  -> insert beginning  *");
    printf("\n*                                                                      *");
    printf("\n*  4  -> insert end     5  -> insert before    6  -> insert after      *");
    printf("\n*                                                                      *");
    printf("\n*  7  -> delete beg     8  -> delete end       9  ->delete node        *");
    printf("\n*                                                                      *");
    printf("\n*  10 -> delete after   11 -> delete list      12 -> sort list         *");
    printf("\n*                                                                      *");
    printf("\n*  13 -> search data    -1  -> exit                                     *");
    printf("\n************************************************************************\n");


    int choice;
    printf("\nenter choice: ");
    scanf("%d",&choice);

    while(choice!=0)
    {
        switch(choice)
        {
            case 1: start = create(start);
                    break;
            case 2: start = display(start);
                    printf("\n");
                    break;  
            case 3: printf("\nNEW NODE WILL BE INSERTED AT THE BEGINING OF LIST\n");
                    start = insert_beg(start);
                    break;
            case 4: printf("\nNEW NODE WILL BE INSERTED AT THE END OF THE LIST\n");
                    start = insert_end(start);
                    break;
            case 5: printf("\nNEW NODE WILL BE INSERTED  BEFORE A NODE IN THE LIST\n");
                    start = insert_before(start);
                    break;
            case 6: printf("\nNEW NODE WILL BE INSERTED AFTER A NODE IN THE LIST\n");
                    start = insert_after(start);
                    break;
            case 7: printf("\nNODE DELETED FROM THE BEGINING OF THE LIST\n");
                    start = delete_beg(start);
                    break;
            case 8: printf("\nNODE DELETED FROM THE END OF THE LIST\n");
                    start = delete_end(start);
                    break;
            case 9: printf("\nA NODE WILL BE DELETED FROM A LIST\n");
                    start = delete_node(start);
                    break;
            case 10: printf("\nA NODE WILL BE DELETED AFTER A NODE IN THE LIST\n");
                    start = delete_after(start);
                    break;
            case 11: printf("\nTHE ENTIRE LIST WILL BE DELETED\n");
                    start = delete_list(start);
                    break;
            case 12: printf("\nLIST WILL BE SORTED\n");
                    start = sort_list(start);
                    break;
            case 13: printf("\nA NODE WILL BE SEARCHED IN THE LIST\n");
                     start = search(start);
                     break;
            default: printf("\n INVALID CHOICE!\n");
        }
       printf("\nenter choice: ");
       scanf("%d",&choice);
    }

    getchar();
    if(choice==0)
    {
        printf("\n         code by: Saurav S Mehta");
        printf("\n\n         \"Thank You! \"\n");
    }

    return 0;
}

Node *create(Node *start){
    if(start!=NULL){
      start = delete_list(start);
    }
    printf("\nCREATE LIST\n");
    Node *new_node;
    int data;
    printf("\nenter -1 to exit \n");
    printf("enter data item : ");
    scanf("%d",&data);

    while(data!=-1){
        new_node = (Node *) malloc(sizeof(Node));

        if(new_node==NULL){
             printf("\noverflow...");
             return start;
        }

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

        printf("enter data item: ");
        scanf("%d",&data);
    }

    if(start==NULL){
        printf("\nYOU ENTERED NO DATA ELEMENTS FOR LIST\n");
        return start;
    }

    printf("\nLIST CREATED\n");
    return start;
}

Node *display(Node *start){ 

    if(start==NULL){
        printf("\nLIST is empty.");
        return start;
    }

    printf("\nLIST: ");
    ptr = start;
    while(ptr != NULL){
        printf("\t%d ",ptr->data);
        ptr = ptr->next;
    }
    return start;
}

Node *search(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    int data;
    printf("\nenter data item to search: ");
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
        printf("**data item not found in list\n");
    }else{
        printf("**found in list and that item stored at position: %d",pos);
    }

    printf("\nNODE SEARCHED\n");
    return start;
}

Node *insert_beg(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    Node *new_node;
    int data;
    printf("\nenter data item to insert at begining of list: ");
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

    printf("\nNEW NODE INSERTED AT BEGINING OF LIST\n");
    
    return start;
}

Node *insert_end(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    int data;
    printf("\nenter data item to insert at end of list: ");
    scanf("%d",&data);

    new_node->data = data;
    new_node->next = NULL;

    ptr = start;
    while(ptr->next!=NULL){
         ptr = ptr->next;
    }
    ptr->next = new_node;

    printf("\nNEW NODE INSERTED AT END OF THE LIST\n");

    return start;
};

Node *insert_after(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

      Node *new_node, *pptr;
      int val,data;
      printf("\netner data item from the list after which you want to insert: ");
      scanf("%d",&val);

      printf("enter new data item to insert: ");
      scanf("%d",&data);

      new_node = (Node *)malloc(sizeof(Node));

      new_node->data = data;
       
      pptr = ptr = start;

      while(pptr->data != val){
        if(pptr->next==NULL){
         printf("\nthe data item you entered not in the list");
         return start;
        }
        pptr = ptr;
        ptr = ptr->next;
      }
      pptr->next = new_node;
      new_node->next = ptr;
    
      printf("\nNEW NODE INSERTED IN THE LIST\n");

      return start;
}

Node *insert_before(Node *start){

        if(start == NULL){
           printf("\n**List is empty, please create it first!\n");
           return start;
        }

         Node *new_node, *pptr;
         pptr = ptr = start;

         new_node = (Node *)malloc(sizeof(Node));

         int val, data;
         printf("\nenter data item from the list before which you want to insert: ");
         scanf("%d",&val);
         printf("enter new data item to insert : ");
         scanf("%d",&data);

         new_node->data = data;

         while(ptr->data != val){
            if(ptr->next==NULL){
                printf("\nthe data item you entered  not in the list");
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
      
         printf("\nNEW NODE INSERTED IN THE LIST\n");

         return start;
}

Node *delete_beg(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    ptr = start;
    start = start->next;
    printf("\ndeleted value is: %d",ptr->data);
    free(ptr);
    return start;
}

Node *delete_end(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }
       Node *pptr;
       ptr = pptr = start;
       while(ptr->next!=NULL){
        pptr = ptr;
        ptr = ptr->next;
       }
       printf("\ndeleted value is: %d",ptr->data);
       free(ptr);
       pptr->next = NULL;
       return start;
}

Node *delete_node(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    Node *pptr;
    int val;
    printf("\nenter the data item, which you want to delete from the list : ");
    scanf("%d",&val);

    pptr = ptr = start;

    if(ptr->data == val){
        start = delete_beg(start);
        return start;
    }

    else{
         while(ptr->data != val){

                pptr = ptr;
                ptr = ptr->next;

                if(ptr==NULL)
                {
                    printf("\n**the data item you entered for deletion is not in the list\n");
                    return start;
                }

         }
         pptr->next = ptr->next;
         printf("\ndeleted element is: %d.",ptr->data);
         free(ptr);
    }

    printf("\nNODE DELETED FROM LIST\n");
    return start;
}

Node *delete_list(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    ptr = start;

    while(ptr!=NULL){
        ptr = ptr->next;
        free(start);
        start = ptr;
    }

    printf("\nENTIRE LIST DELETED\n");

    return start;
}

Node *delete_after(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }

    Node *pptr;
    pptr = ptr = start;

    int val;
    printf("\nenter data item from the list, after which you want to delete data item: ");
    scanf("%d",&val);

    while(pptr->data!=val){
         pptr = ptr;

         if(pptr==NULL){
            printf("\n**data item you entered from the list is not in the list.\n");
         }

         ptr = ptr->next;

    }
    pptr->next = ptr->next;
    free(ptr);
    
    printf("\nNODE DELETED FROM THE LIST\n");
   
    return start;
}

Node *sort_list(Node *start){

    if(start == NULL){
        printf("\n**List is empty, please create it first!\n");
        return start;
    }


      Node *ptr1, *ptr2;
      int temp;

      ptr1 = start;

      while(ptr1!=NULL){

        ptr2 = ptr1->next;

        while(ptr2!=NULL)
        {
            if(ptr1->data > ptr2->data){
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
      }

      printf("\nLIST SORTED\n");
      return start;

}
