//Single linked list (REVERSING A SINGLE LINKED LIST)
#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
void rev_list(struct node *head)
{
    struct node *temp1=NULL, *temp2=NULL, *ptr;
    while(head!=NULL)
    {
        temp2=head->link;
        head->link=temp1;
        temp1=head;
        head=temp2;
    }
    head=temp1;
    ptr=head;
    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr=ptr->link;
    }
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node ));
    head->data=1;
    head->link=NULL;

    struct node *head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=2;
    head1->link=NULL;

    head->link=head1;

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=3;
    head1->link=NULL;

    head->link->link=head1;


    head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=4;
    head1->link=NULL;

    head->link->link->link=head1;

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=5;
    head1->link=NULL;

    head->link->link->link->link=head1;

    rev_list(head);   
}