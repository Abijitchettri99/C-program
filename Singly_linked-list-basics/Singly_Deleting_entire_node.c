//single linked list (deleting the entire node)
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void del_all_node(struct node *head)
{
    if(head==NULL)
    {
        printf("FIRST YOU NEED TO STORE SOME DATA IN LINKED LIST");
        exit(1);
    }
    struct node *temp=head,*ptr;
    while(temp!=NULL)
    temp=temp->link;
    free(head);
    head=temp;

    ptr=head;
    if(ptr==NULL)
    {
        printf("LINKED LIST DELETED SUCCESFULLY");
    }
    else
    {
        printf("LINKEED LIST IS ALREADY EMPTYaaaaa");
    }
    
}

int main()
{

    struct node *head=NULL;
    
    head=(struct node *)malloc(sizeof(struct node ));
    head->data=1;
    head->link=NULL;

    struct node *head1=(struct node *)malloc(sizeof(struct node *));
    head1->data=2;
    head1->link=NULL;

    head->link=head1;

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->data=3;
    head1->link=NULL;

    head->link->link=head1;
    
    del_all_node(head);
} 