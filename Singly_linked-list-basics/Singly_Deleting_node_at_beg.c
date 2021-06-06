//SINGLE LINKED LIST (DELETING NODE AT THE BEGINNING)
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void del_first_node(struct node *head)
{
    if(head==NULL)
        printf("LINKED LIST IS ALREADY EMPTY!");

    struct node *ptr;
    ptr=head;

    head=head->link;
    free(ptr);
    
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

    struct node *head1=(struct node *)malloc(sizeof(struct node));
    head1->data=2;
    head1->link=NULL;

    head->link=head1;

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=3;
    head1->link=NULL;

    head->link->link=head1;

    del_first_node(head); 
}
