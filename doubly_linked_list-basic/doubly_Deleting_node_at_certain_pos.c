//doubly linked list(deleting node at certain position)
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
struct node *del_certain_pos(struct node *head, int pos)
{
    struct node *ptr,*temp=head,*temp2=NULL;
    if(pos==1)
    {
        head=temp->next;
        free(temp);
    }
    while(pos>1){
          temp = temp->next;
          pos--;
        }
    if(temp->next == NULL)
        head = del_at_last(head);
    else{
    temp2=temp->prev;
    temp2->next = temp->next;
    temp->next->prev=temp2;
    free(temp);
    temp=NULL;
    }
    return head;
}
void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf(" %d ", ptr->data);
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
    head1->prev=NULL;

    head->prev->prev=head1;
    head->next->next=head1;

    head1=(struct node *)malloc(sizeof(struct node ));
    head1->prev=NULL;
    head1->data=4;
    head1->next=NULL;

    head->prev->prev->prev=head1;
    head->next->next->next=head1;

    printf("Before deletion: ");
    print(head);
    
    head = del_certain_pos(head,2);
    printf("\nAfter deletion: ");
    print(head);
}