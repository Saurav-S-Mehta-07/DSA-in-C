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

Node *sort_list(Node *);

Node *search(Node *);


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
    printf("\n*  10 -> delete after   11 -> delete before    12 -> delete list       *");
    printf("\n*                                                                      *");
    printf("\n*  13 -> sort list      14 -> search element    0  -> exit            *");
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
            case 7: printf("\nNODE WILL BE DELETED FROM THE BEGINING OF THE LIST\n");
                    start = delete_beg(start);
                    break;
            case 8: printf("\nNODE WILL BE DELETED FROM THE END OF THE LIST\n");
                    start = delete_end(start);
                    break;
            case 9: printf("\nA NODE WILL BE DELETED FROM A LIST\n");
                    start = delete_node(start);
                    break;
            case 10: printf("\nA NODE WILL BE DELETED AFTER A NODE IN THE LIST\n");
                    start = delete_after(start);
                    break;
            case 11: printf("\nA NODE WILL BE DELETED BEFORE A NODE IN THE LIST\n");
                    start = delete_before(start);
                    break;
            case 12: printf("\nTHE ENTIRE LIST WILL BE DELETED\n");
                    start = delete_list(start);
                    break;
            case 13: printf("\nLIST WILL BE SORTED\n");
                    start = sort_list(start);
                    break;
            case 14: printf("\nA NODE WILL BE SEARCHED IN THE LIST\n");
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
    ptr = start;
    int data;
    printf("\nenter data or -1 to exit: ");
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

        printf("\nenter data or -1 to exit: ");
        scanf("%d",&data);
    }

    if(start == NULL)
    {
      printf("\nYOU ENTERED NO DATA ELEMENTS FOR LIST\n");
      return start;
    }

    printf("\nLIST CREATED\n");
    return start;

}

Node *display(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }

    printf("\nLIST: ");
    ptr = start;
    while(ptr!=NULL){
           printf("\t%d",ptr->data);
           ptr = ptr->next;
    }
    return start;
}

Node *insert_beg(Node *start){
    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }
          int data;
          printf("\nenter value to insert: ");
          scanf("%d",&data);

          Node *new_node;
          new_node = (Node *)malloc(sizeof(Node));

          new_node->data =  data;

          new_node->prev = NULL;

          new_node->next = start;
          
          start = new_node;
          
          printf("\n%d inserted.\n",data);
          return start;
}

Node *insert_end(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }

    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));

    int data;
    printf("\nenter value to insert: ");
    scanf("%d",&data);

    new_node->data = data;
    new_node->next = NULL;
    ptr = start;
    while(ptr->next!=NULL){
      ptr = ptr->next;
    }
   ptr->next = new_node;
   new_node->prev = ptr;
   printf("\n%d inserted.\n",data);
   return start;
}

Node *insert_after(Node *start){
    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }

    Node *new_node;
    new_node = (Node  *)malloc(sizeof(Node));
     ptr = start;
     int val;
     printf("\nenter data from list after which you want to insert new data: ");
     scanf("%d",&val);
     int data;
     printf("\nenter data to insert: ");
     scanf("%d",&data);
     new_node->data = data;

     while(ptr->data!=val){
        if(ptr->next==NULL){
              printf("\n%d is not in the list\n",val);
              return start;
        }
        ptr = ptr->next;
     }
     new_node->next = ptr->next;
     ptr->next = new_node;
     new_node->prev = ptr;
     
     printf("\n%d inserted.\n",data);

    return start;     
}

Node *insert_before(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }

    Node *new_node;
    new_node = (Node  *)malloc(sizeof(Node));
    ptr = start;
    int val;
    printf("\nenter data from the list before which you want to insert new data: ");
    scanf("%d",&val);

    if(start->data == val){
        start = insert_beg(start);
        return start;
    }

    int data;
    printf("\nenter data to insert : ");
    scanf("%d",&data);
    new_node->data = data;

    while(ptr->data!=val){
        if(ptr->next==NULL){
              printf("\n%d is not in the list\n",val);
              return start;
        }
        ptr = ptr->next;
    }
    new_node->next = ptr;
    new_node->prev = ptr->prev;
    ptr->prev->next = new_node;
    ptr->prev = new_node;
    printf("\n%d inserted.\n",data);  
    return start;
}

Node *delete_beg(Node  *start){
    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }

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
    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    } 

    if(start->next == NULL){
          start = delete_beg(start);
          printf("\ndeleted\n");
          return start;
    }

    ptr = start;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    printf("\n%d deleted.\n",ptr->data);
    ptr->prev->next = NULL;
    free(ptr);
    return start;
}

Node *delete_after(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }    


    ptr = start;
    int data;
    printf("\nenter data from the list after which you want to delete the node: ");
    scanf("%d",&data);

    while(ptr->data != data){
        if(ptr->next==NULL){
              printf("\n%d is not in the list\n",data);
              return start;
        }
        ptr = ptr->next;
    }
    if(ptr->next == NULL){
        printf("\nthere is no data element after %d\n",data);
        return start;
    }
    
    Node *temp;
    temp = ptr->next;
    ptr->next = temp->next;

    if(temp->next!=NULL){
        temp->next->prev = ptr;   
    }
    printf("\n%d deleted.\n",temp->data);
    free(temp);
    return start;
}

Node *delete_before(Node *start){
    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    } 
    ptr = start;
    int data;
    printf("\nenter data from the list before which you want to delete: ");
    scanf("%d",&data);

    if(start->data == data){
        printf("\nthere is no data element before %d.\n",data);
        return start;
    }

    while(ptr->data != data){
        if(ptr->next==NULL){
              printf("\n%d is not in the list\n",data);
              return start;
        }
        ptr = ptr->next;
    }
    
    Node *temp;
    temp = ptr->prev;
    if(temp == start){
        start = delete_beg(start);
    }else{
       ptr->prev = temp->prev;
       temp->prev->next = ptr;  
       printf("\n%d deleted.\n",temp->data);
       free(temp);
    }
    return start;
}

Node *delete_node(Node *start){
    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }
    ptr = start;
     int data;
     printf("\nenter data from list, which you want to delete: ");
     scanf("%d",&data);

     while(ptr->data!=data){
        if(ptr->next==NULL){
              printf("\n%d is not in the list\n",data);
              return start;
        }
        ptr = ptr->next;
     }

     if(ptr==start){
        start = delete_beg(start);
        printf("\nnode deleted\n");
     }
     else if(ptr->next == NULL){
        start = delete_end(start);
     }
     else{
       ptr->next->prev = ptr->prev;
       ptr->prev->next = ptr->next;
       free(ptr);
       printf("\nnode deleted\n");
     }

     return start;
}

Node *delete_list(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }    

    while(start!=NULL){
        start = delete_beg(start);
    }

    printf("\nentire list deleted");
    return start;
}

Node *sort_list(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    }   

        Node *ptr1 , *ptr2;
        ptr1 = ptr2 =start;

        int temp;

        while(ptr1->next!=NULL)
        {
            ptr2 = ptr1->next;
            while(ptr2!=NULL){
                if(ptr1->data > ptr2->data){
                    temp = ptr1->data;
                    ptr1->data = ptr2->data;
                    ptr2->data = temp;
                }
                ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
        }
        printf("\nlist sorted\n");
        return start;
}

Node *search(Node *start){

    if(start==NULL){
        printf("\nLIST is empty.\n");
        return start;
    } 
    
    int data;
    printf("\nenter data to search in list: ");
    scanf("%d",&data);


    ptr = start;
    while(ptr->data != data){
        if(ptr->next == NULL){
            printf("\n%d not found in the list\n",data);
            return start;
        }
        ptr = ptr->next;
    }
    printf("\n%d found at position %d.\n",data,ptr);
    return start;
}
