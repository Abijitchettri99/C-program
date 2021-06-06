#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void create_doubleL(struct node **,int);
void insert_first(struct node **,int);
void traverse_forward(struct node *);
void insert_last(struct node *,int);
void delete_first(struct node **);
void delete_last(struct node **);

int main()
{
    struct node *head=NULL;
    int wish,num,size;
    while(1)
    {
        printf("\n1.create double linked list\n2.insert data at first position\n3.insert data at last position\n4.delete first node\n5.delete last node\n6.traverse forward\n0.exit\nEnter your choice\n");
        scanf("%d",&wish);
        switch(wish)
        {
        case 1:
            printf("enter the no, of nodes to create\n");
            scanf("%d",&size);
            create_doubleL(&head,size);
            break;
        case 2:
            printf("enter the data for the first node\n");
            scanf("%d",&num);
            insert_first(&head,num);
            break;
        case 3:
            printf("enter the data for the last node\n");
            scanf("%d",&num);
            insert_last(head,num);
            break;
        case 4:
            delete_first(&head);
            printf("first node deleted successfully!\n");
            break;
        case 5:
            delete_last(&head);
            printf("last node deleted successfully!\n");
            break;
        case 6:
            traverse_forward(head);
            break;
        case 0:exit(1);
        default:printf("wrong choice...press enter to continue!\n");
        }
    }
    return 0;
}

void create_doubleL(struct node **head,int size)
{
    struct node *newnode,*temp;
    int item,i;
    if(*head != NULL)
    {
        printf("the list already exists...cant allocate memory\n");
        return;
    }
    for(i=1;i<=size;i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data for the node %d\n",i);
        scanf("%d",&item);
        newnode->data=item;
        newnode->next=NULL;
        if(*head == NULL)
        {
            *head = newnode;
            newnode->prev=NULL;
        }
        else
            temp->next = newnode;
        newnode->prev=temp;
        temp = newnode;
    }
    return;
}
void insert_first(struct node **head,int item)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->prev=NULL;
    temp = *head;
    temp->prev=newnode;
    newnode->next=temp;
    *head = newnode;
}

void insert_last(struct node *head,int item)
{
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    temp = head;
    while(temp->next != NULL)
        temp=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    return;
}

void delete_first(struct node **head)
{
    struct node *temp,*front;
    temp = *head;
    if(temp->next == NULL)
       {
        *head = NULL;
        free(temp);
        return;
       }
    front = temp->next;
    *head = front;
    free(temp);
    return;
}

void delete_last(struct node **head)
{
    struct node *temp,*last;
    temp = *head;
    if(temp->next == NULL)
       {
        *head = NULL;
        free(temp);
        return;
       }
    while(temp->next != NULL)
    {
        last = temp;
        temp = temp->next;
    }
    last->next = NULL;
    free(temp);
    return;
}

void traverse_forward(struct node *head)
{
    struct node *temp;
    if(head == NULL)
    {
        printf("list doesnt exists...\n");
        return;
    }
    temp = head;
    printf("The datas are: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return;
}
