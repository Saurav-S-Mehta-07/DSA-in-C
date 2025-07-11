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

Node *insert_before(Node *);

Node *insert_after(Node *);

Node *delete_beg(Node *);

Node *delete_end(Node *);

Node *delete_after(Node *);

Node *delete_node(Node *);

Node *delete_list(Node *);

Node *search(Node *);

Node *sort_CLL(Node *);

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
    printf("\n*  13 -> search data    0  -> exit                                     *");
    printf("\n************************************************************************\n");


    int choice;
    printf("\nenter choice: ");
    scanf("%d",&choice);

    while(choice!=0)
    {
        switch(choice)
        {
            case 1: 
                    start = create(start);
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
            case 11: printf("\nTHE ENTIRE LIST WILL BE DELETED\n");
                    start = delete_list(start);
                    break;
            case 12: printf("\nLIST WILL BE SORTED\n");
                    start = sort_CLL(start);
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
   printf("\nCREATE LIST");
   Node *new_node;
   char ch;
   printf("\nenter character data or 0 to exit: "); 
   scanf(" %c",&ch);

   while(ch!='0'){

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
    scanf(" %c",&ch);
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

    if(new_node == NULL){
        printf("\noverflow");
        return start;
    }

    char ch;
    printf("\nenter new character data to insert in the CLL: ");
    scanf(" %c",&ch);

    new_node->data = ch;

    ptr = start;

    while(ptr->next != start){
        ptr = ptr->next;
    }

    ptr->next =  new_node;
    new_node->next = start;
    start = new_node;
    
    printf("\n'%c' character data inserted at the beginnig of the list.\n",ch);
    return start;
}

Node *insert_end(Node *start){
    Node *new_node;

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL){
        printf("\noverflow");
        return start;
    }

    char ch;
    printf("\nenter character data to insert at end of CLL: ");
    scanf(" %c",&ch);

    new_node->data = ch;

    ptr = start;
    ptr = start;

    while(ptr->next != start){
        ptr = ptr->next;
    }

    ptr->next =  new_node;
    new_node->next = start;

    printf("\n'%c' character data inserted at the end of the list.\n",ch);
    return start;

}

Node *insert_before(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    Node *pptr, *new_node;

    ptr = pptr = start;

    char val;
    printf("\nenter character data from list before which you want to insert: ");
    scanf(" %c",&val);

    if(start->data == val){
        start = insert_beg(start);
        return start;
    }

    char ch;
    printf("\nenter new character data to insert in CLL: ");
    scanf(" %c",&ch);


    new_node = (Node *)malloc(sizeof(Node));

    new_node->data = ch;

    while(ptr->data != val){
          if(pptr->next == start){
            printf("\n'%c' is not in the list.\n",val);
            return start;
          }
           pptr = ptr;
           ptr = ptr->next;
    }
    pptr->next = new_node;
    new_node->next = ptr;
    printf("\n'%c' character data inserted\n",ch);
    return start;
}

Node *insert_after(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    Node *pptr , *new_node;

    new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL){
        printf("\noverflow");
        return start;
    }

    char ch;
    printf("\nenter character data to insert in the CLL: ");
    scanf(" %c",&ch);

    char val;
    printf("\nenter character data from CLL after which you want to insert new data: ");
    scanf(" %c",&val);

    new_node->data = ch;

    pptr = start;

    ptr = pptr->next;



    while(pptr->data != val){

        if(ptr==start){
            printf("\n'%c' is not in the list\n",val);
            return start;
        }

        pptr = ptr;
        ptr = ptr->next;
    }
     

    pptr->next = new_node;
    new_node->next = ptr;
    

    printf("\n'%c' character data inserted\n",ch);
    return start;
}

Node *delete_beg(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    if(start == start->next){
        printf("\n'%c' deleted\n",start->data);
        free(start);
        start = NULL;
        return start;
    }

    ptr = start;

    while(ptr->next!=start){
        ptr = ptr->next;
    }
     
    ptr->next = start->next;
    printf("\n'%c' deleted\n",start->data);
    free(start);
    start = ptr->next;
    
    return start;
}

Node *delete_end(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    if(start == start->next){
        printf("\n%c deleted from list\n",start->data);
        free(start);
        start = NULL;
        return start;
    }

    Node *pptr;
    ptr = pptr = start;

    while(ptr->next != start){
        pptr = ptr;
        ptr = ptr->next;
    }
    pptr->next = start;
    printf("\n'%c' deleted\n",ptr->data);
    free(ptr);
    return start;
}

Node *delete_after(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    if(start == start->next){
        printf("\nno data element present after this data.");
        return start;
    }

    Node *pptr;

    pptr = ptr = start;

    char ch;
    printf("\nenter data from list after which you want to delete: ");
    scanf(" %c",&ch);

    ptr = ptr->next;

    while(pptr->data != ch){

        if(ptr==start){
             printf("\n'%c' is not in the list\n",ch);
             return start;
        }

        pptr = ptr;
        ptr = ptr->next;
    }

    pptr->next = ptr->next;

    if(ptr == start){
        start = ptr->next;
    }
    printf("\n'%c' deleted\n",ptr->data);
    free(ptr);

    return start;
}

Node *delete_node(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }

    Node *pptr;

    pptr = ptr = start;

    char ch;
    printf("\nenter data from the list which you want to delete: ");
    scanf(" %c",&ch);

    if(start->data == ch){
        start = delete_beg(start);
        return start;
    }

    while(ptr->data != ch){
        if(ptr->next == start){
            printf("\n'%c' is not in the list\n",ch);
            return start;
        }
        pptr = ptr;
        ptr = ptr->next;
    }

    pptr->next = ptr->next;

    if(ptr == start){
        start = ptr->next;
    }

    printf("\n'%c' deleted\n",ptr->data);
    free(ptr);

    return start; 
}

Node *delete_list(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }
    Node *pptr;
    pptr = ptr = start;
    while(ptr->next!=start){
        pptr = ptr->next;
        free(ptr);
        ptr = pptr;
    }
    free(ptr);
    start = NULL;
    printf("\nentire list deleted\n");
    return start;
}

// Node *delete_list(Node *start){
//     if(start==NULL){
//        printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
//        return start;
//     }
//     while(start!=NULL){
//         start = delete_beg(start);
//      }
//      printf("\nentire list deleted\n");
//      start = NULL;
//      return start;
// }

Node *search(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }
    char ch;
    printf("\nenter data item which you want to search in list: ");
    scanf(" %c",&ch);

    ptr = start;

    while(ptr->data!=ch){
        if(ptr->next == start){
            printf("\nthe data you entered is not found in list.\n");
            return start;
        }
        ptr = ptr->next;
    }
    printf("\nthe data you entered FOUND at position: %d.",ptr->next);

    return start;
}

Node *sort_CLL(Node *start){

    if(start==NULL){
       printf("\nLIST IS EMTPY, PLEASE CREATE LIST FIRST!\n");
       return start;
    }   
    
    Node *ptr1, *ptr2;
    ptr1 = ptr2 = start;

    while(ptr1->next!=start){
        ptr2 = ptr1->next;
        while(ptr2!=start){
               if(ptr1->data > ptr2->data){
                char temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
               }
               ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    
    printf("\nsorted\n");
    return start;

}
