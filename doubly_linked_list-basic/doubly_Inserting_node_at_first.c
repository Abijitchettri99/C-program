//Doublly linked list (Insertion at the Beginning)
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};

void add_at_beg(struct node *head, int data)
{
   struct node *temp,*ptr;
   temp=(struct node *)malloc(sizeof(struct node ));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;

   temp->next=head;
   head->prev=temp;
   head=temp;

   ptr=head;
   while(ptr!=NULL)
   {
       printf(" %d ",ptr->data);
       ptr=ptr->next;
   }
}

int main()
{
    struct node *head =( struct node *)malloc(sizeof(struct node ));
    head->prev=NULL;
    head->data=1;
    head->next=NULL;

    struct node *head1= (struct node *)malloc(sizeof(struct node ));
    head1->prev=NULL;
    head1->data=2;
    head1->next=NULL;

    head->prev=head1;
    head->next=head1;

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->prev=NULL;
    head1->data=3;
    head1->next=NULL;

    head->prev->prev=head1;
    head->next->next=head1;

    
    head1=(struct node *)malloc(sizeof(struct node ));
    head1->prev=NULL;
    head1->data=4;
    head1->next=NULL;

    head->prev->prev->prev=head1;
    head->next->next->next=head1;

    add_at_beg(head,5);  //5=any number to be inserted in the beginning.

    return 0;
} 