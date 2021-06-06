//Doubly linked list(Insertion of Node at the last)
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_at_last(struct node *head, int data)
{
    struct node *temp,*temp1=head;
    temp=(struct node *)malloc(sizeof(struct node ));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1;
    return head;
}
void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr=ptr->next;
    }
    
}

int main()
{
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

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->prev=NULL;
    head1->data=4;
    head1->next=NULL;

    head->prev->prev->prev=head1;
    head->next->next->next=head1;
    printf("Before insertion: ");
    print(head);

    head = add_at_last(head,6); //(6=number inserted at last position)
    printf("\nAfter insertion: ");
    print(head);
    return 0;
}