//single linked list (deleting the node at particular position)
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void del_at_pos(struct node **head, int pos)
{
    struct node *ptr= *head;
    struct node *current = *head;
    struct node *previous = *head;

    if(*head==NULL)
    {
        printf("LINKED LIST IS ALREADY EMPTY");
    }
    else if(pos==1)
    {
        *head=current->link;
        free(current);
        current=NULL;   
        
    }
    else
    {
    
        while(pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
        free(current);
        current =NULL;

        ptr = *head;
        while(ptr!=NULL)
        {
            printf(" %d ",ptr->data);
            ptr=ptr->link;
        }
   

    }
       
}

int main()
{
    //int pos;
    struct node *ptr=NULL;
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
    
     del_at_pos(&head, 2); //(2=position where u want to delete node)

    return 0;
} 