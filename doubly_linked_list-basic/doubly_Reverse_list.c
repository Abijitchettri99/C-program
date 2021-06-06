//doubly linked list(reversing the linked list)
#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};


struct node *swap(struct node *head)
{
    struct node *temp=head, *tp=temp->next;
    temp->next=NULL;
    temp->prev=tp;
    
    
    while(tp != NULL)
    {
        tp->prev = tp->next;
        tp->next= temp;
        temp=tp;
        tp=tp->prev;
    }
    head = temp;
    return head;
}
void print(struct node *head)
{
    struct node *ptr =head;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
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
head1->data=4;
head1->next=NULL;

head->prev->prev->prev=head1;
head->next->next->next=head1;

head1=(struct node *)malloc(sizeof(struct node ));
head1->prev=NULL;
head1->data=5;
head1->next=NULL;

head->prev->prev->prev->prev=head1;
head->next->next->next->next=head1;
printf("Before reveresing data are: ");
print(head);

head = swap(head);
printf("\nAfter reversing data are: ");
print(head);
}