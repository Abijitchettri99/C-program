//SINGLE LINKED LIST (INSERTING A NODE AT CERTAIN POSITION)

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void add_certain_pos(struct node *head,int data,int pos)
{
    struct node *ptr,*temp;
    ptr=head;

    pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }

    temp=(struct node *)malloc(sizeof(struct node ));
    temp->data=data;
    temp->link=NULL;

    temp->link=ptr->link;
    ptr->link=temp;

    ptr=head;
    while(ptr!=NULL)
        {
            printf(" %d ", ptr->data);
            ptr=ptr->link;
        }
}



int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;

    struct node *head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=2;
    head1->link=NULL;

    head->link=head1;

    head1=(struct node *)malloc(sizeof(struct node));
    head1->data=3;
    head1->link=NULL;

    head->link->link=head1;

    head1=(struct node *)malloc(sizeof(struct node));
    head1->data=4;
    head1->link=NULL;

    head->link->link->link=head1;

    head1=(struct node *)malloc(sizeof(struct node));
    head1->data=5;
    head1->link=NULL;

    head->link->link->link->link=head1;

    head1=(struct node *)malloc(sizeof(struct node));
    head1->data=7;
    head1->link=NULL;

    head->link->link->link->link->link=head1;

    add_certain_pos(head,6,2);              //(6 or any no.= number you want to add at node), (2 or any pos = position where to place the new data)
}