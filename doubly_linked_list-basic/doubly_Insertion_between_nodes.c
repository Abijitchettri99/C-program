//Doubly Linked list(Insertion between the nodes)
#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_at_certain(struct node *head, int pos)
{
    struct node *temp=head, *temp2=NULL;
    struct node *new;

    new=(struct node *)malloc(sizeof(struct node ));
    new->prev=NULL;
    new->data=12;
    new->next=NULL;
    while(pos!=1)
    {
        temp=temp->next;
        pos--;
    }
    if (temp->next==NULL)
    {
        temp->next=new;
        new->prev=temp;
    }
    else if(pos==1)
    {
        head->prev=new;
        new->next=head;
        head=new;
    }
    else{
    temp2=temp->next;
    temp->next=new;
    temp2->prev=new;

    new->prev=temp;
    new->next=temp2;
    }
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
    head1->data=5;
    head1->next=NULL;

    head->prev->prev->prev=head1;
    head->next->next->next=head1;
    printf("Before insertion: ");
    print(head);

    head = add_at_certain(head,1); //1=position where u want to insert the new node;
    printf("\nAfter insertion: ");
    print(head);
} 