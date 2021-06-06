//SINGLE LINKED LIST (DELETING THE LAST NODE)
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void del_last_node(struct node *head)
{
    if(head==NULL)
        printf("LINKED LIST IS ALREADY EMPTY!");
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *temp=head;
        struct node *temp2=head;
        struct node *ptr=NULL;

        while(temp->link!=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;

        ptr=head;
        while(ptr!=NULL)
        {
            printf(" %d ",ptr->data);
            ptr=ptr->link;
        }
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

    del_last_node(head);
}