//Doubly LInked list (Deleting the first node )
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node* del_at_last(struct node* head)
{
    struct node *temp=head,*ptr;
    while(temp->next->next != NULL)
        temp=temp->next;
    free(temp->next);
    temp->next=NULL;
    return head;
}
void print(struct node *head)
{
   struct node *ptr=head;
    while(ptr != NULL)
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



    printf("Before deleting data are: ");
    print(head);

    printf("\nAfter deleting data are: ");
    head = del_at_last(head);
    print(head);
} 