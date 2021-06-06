#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data =45;
    head->link= NULL;

    struct node *head2=(struct node *)malloc(sizeof(struct node));
    head2->data=50;
    head2->link=NULL;
    head->link= head2;


    head2=(struct node *)malloc(sizeof(struct node));
    head2->data=79;
    head2->link=NULL;

    head->link->link=head2;
    printf(" %d",data->head);
    return 0;
}