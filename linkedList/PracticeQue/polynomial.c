//WAP to store a polynomial using linked list Also, perform addition and subtraction on two polynomial.

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    int coff;
    struct node *next;
}Node;

Node *start1 = NULL, *ptr;
Node *start2 = NULL, *start3 = NULL, *start4 = NULL;

Node *create_poly(Node *);

Node *display_poly(Node *);

Node *add_poly(Node *, Node *);

Node *add_node(Node *, int, int);

Node *sub_poly(Node *, Node *);

int main(){


    start1 = create_poly(start1);
    start2 = create_poly(start2);
    printf("1st Poly: ");
    start1 = display_poly(start1);
    printf("\n");
    printf("2nd Poly: ");
    start2 = display_poly(start2);

    start3 = add_poly(start1, start2);
    printf("\n");
    printf("\naddition : ");
    start3 = display_poly(start3);

    start4 = sub_poly(start1, start2);
    printf("\ndifference: ");
    start4 = display_poly(start4);


    return 0;
}

Node *create_poly(Node *start){
    int n,c;
    printf("\nenter -1 to stop\n");
    printf("\nenter number: ");
    scanf("%d",&n);   
    while(n != -1){
       printf("enter its coff: ");
       scanf("%d",&c);
       Node *new_node;
       if(start==NULL){
        new_node = (Node *)malloc(sizeof(Node));
         new_node->num = n;
         new_node->coff = c;
         new_node->next = NULL;
         start = new_node;
       }
       else{
        ptr = start;
        new_node = (Node *)malloc(sizeof(Node));
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        new_node->num = n;
        new_node->coff = c;
        new_node->next = NULL;
        ptr->next = new_node;
       }
       printf("\nenter -1 to stop\n");
       printf("\nenter number: ");
       scanf("%d",&n);  
    }

    return start;
}
Node *display_poly(Node *start){
      ptr = start;
      while(ptr!=NULL){
        printf("\t%d x %d\t", ptr->num, ptr->coff);
        ptr = ptr->next;
      }
      return start;
}
Node *add_poly(Node *start1, Node *start2){
        Node *ptr1, *ptr2;

        ptr1 = start1;
        ptr2 = start2;

        int sum_num;

        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->coff == ptr2->coff){
                sum_num = ptr1->num + ptr2->num;
                start3 = add_node(start3, sum_num, ptr1->coff);
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            else if(ptr1->coff > ptr2->coff){
                start3 = add_node(start3, ptr1->num, ptr1->coff);
                ptr1 = ptr1->next;
            }
            else if(ptr1->coff < ptr2->coff){
                start3 = add_node(start3, ptr2->num, ptr2->coff);
                ptr2 = ptr2->next;
            }
        }

        if(ptr1 != NULL)
        {
            while(ptr1 != NULL){
                start3 = add_node(start3, ptr1->num, ptr1->coff);
                ptr1 = ptr1->next;
            }
        }

        if(ptr2 != NULL)
        {
            while(ptr2 != NULL){
                start3 = add_node(start3, ptr2->num, ptr2->coff);
                ptr2 = ptr2->next;
            }
        }

        return start3;
}
Node *add_node(Node *start, int n, int c){
        Node *new_node;
        if(start == NULL){
            new_node = (Node *)malloc(sizeof(Node));
            new_node->num = n;
            new_node->coff = c;
            new_node->next = NULL;
            start = new_node;
        }else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            new_node = (Node *)malloc(sizeof(Node));
            ptr->next = new_node;
            new_node->coff = c;
            new_node->num = n;
            new_node->next = NULL;
        }

        return start;
}
Node *sub_poly(Node *start1, Node *start2){
    Node *ptr1, *ptr2;
    ptr1 = start1;
    ptr2 = start2;
    int sub_num;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->coff == ptr2->coff){
            sub_num = ptr1->num - ptr2->num;
            start4 = add_node(start4, sub_num, ptr1->coff);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if(ptr1->coff > ptr2->coff){
            start4 = add_node(start4, ptr1->num, ptr1->coff);
            ptr1 = ptr1->next;
        }
        else if(ptr1->coff < ptr2->coff){
            start4 = add_node(start4, ptr2->num, ptr2->coff);
            ptr2 = ptr2->next;
        }
    }
    if(ptr1 != NULL)
    {
        while(ptr1 != NULL){
            start4 = add_node(start4, ptr1->num, ptr1->coff);
            ptr1 = ptr1->next;
        }
    }
    if(ptr2 != NULL)
    {
        while(ptr2 != NULL){
            start4 = add_node(start3, ptr2->num, ptr2->coff);
            ptr2 = ptr2->next;
        }
    }
    return start4;  
}

