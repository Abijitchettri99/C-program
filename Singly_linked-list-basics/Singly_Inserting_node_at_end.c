#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};  
void add_node(struct node *head, int data)
{
    struct node *ptr=NULL,*temp;
    (ptr=head);
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->link=NULL;
        
            while(ptr->link!=NULL)          //to add element at last
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
    }   
        printf("AFTER ADDING ELEMENT THE DATAS ARE:\n");
        (ptr=head);
        
        while(ptr!=NULL)                    //to print all the data
        {
            printf(" %d ",ptr->data);
            ptr = ptr-> link;
        }
    
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=23;
    head->link=NULL;

    struct node *head1=malloc(sizeof(struct node));
    head1->data=56;
    head1->link=NULL;

    head->link=head1;


    head1=malloc(sizeof(struct node));
    head1->data=54;
    head1->link=NULL;


    head->link->link=head1;

    head1=malloc(sizeof(struct node));
    head1->data=85;
    head1->link=NULL;

    head->link->link->link=head1;
    
    add_node(head,124); //the number we want to add at last.
}