//Doubly linked list (Inserting a NODE in an empty list)
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
int main()
{
    struct node *ptr=NULL;
    struct node *head=(struct node *)malloc(sizeof(struct node ));
    head->prev=NULL;
    head->data=1;
    head->next=NULL;

    struct node *head1=(struct node *)malloc(sizeof(struct node ));
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

    ptr=head;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr=ptr->next;
    }
}