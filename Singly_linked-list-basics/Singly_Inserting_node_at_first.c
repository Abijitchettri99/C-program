//SINGLE LINKED LIST (INSERTING NODE AT THE BEGINNING OF THE LIST)
#include<stdio.h>
#include<stdlib.h>

struct node

{
    int data;
    struct node *link;
};

void add_node_first (struct node *head,int data)
{
    struct node *ptr , *temp;

    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    

    temp->link=head;
    {
        (ptr=temp);
        while (ptr!=NULL)
            {
                printf(" %d ",ptr->data);
                ptr=ptr->link;
            }
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data=23;
    head->link=NULL;

    struct node *head1=malloc(sizeof(struct node));
    head1->data=56;
    head1->link=NULL;

    head->link=head1;

    head1=malloc(sizeof(struct node ));
    head1->data=33;
    head1->link = NULL;

    head->link->link=head1;

    add_node_first(head,12);
}