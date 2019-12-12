#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *nn,*temp;
int pos;
void main()
{
    int choice;
    int choice2;
    while(1)
    {
    printf("\n------------------------------------------------Single linked list---------------------------------------------------");
    printf("\n\n\t\t\t\t\t\t1.Press 1 for insertion \n\t\t\t\t\t\t2.Press 2 for deletion\n\t\t\t\t\t\t3.press 3 for Traversal\n\t\t\t\t\t\t4.Quit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n1.Press 1 for insert an node at the end of linked list\n2.Press 2 for insert a node at beginning of list\n3.Press 3 for insert a node at middle");
               scanf("%d",&choice2);
               switch(choice2)
               {
               case 1:
                insertNodeEnd();
                break;
               case 2:
                insertNodeBegin();
                break;
               case 3:
                insertNodeMiddle();
                break;
               default:
                printf("Invalid option");
                }
                break;
    case 2:
        printf("1.Press 1 for delete node from the last\n2.Press 2 for delete node from beginning \n3 Press 3 for delete node from the middle");
               scanf("%d",&choice2);
               switch(choice2)
               {
               case 1:
                DeleteNodeEnd();
                break;
               case 2:
                DeleteNodeBegin();
                break;
               case 3:
                DeleteNodeMiddle();
                break;
               default:
                printf("Invalid option");
               }
               break;
    case 3:
        printf("\nPrinting the elements\n");
        traverse();
        break;
    case 4:
        exit(0);

    default:
        printf("Invalid Option");
        break;


    }
    }
}
void insertNodeEnd()
{

nn=(struct node*)malloc(sizeof(struct node));
printf("Enter the value of Node");
scanf("%d",&nn->data);
nn->next=NULL;
temp=head;
if(temp==NULL)
{
    nn->next=NULL;
        head=nn;
}
else
{
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=nn;
}
printf("New node is inserted at end");

}

void insertNodeBegin()
{
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of Node");
    scanf("%d",&nn->data);
if(head==NULL)
{
    head=nn;
    nn->next=NULL;
}
else
{
    nn->next=head;
    head=nn;
}
printf("New node is inserted");
}

void insertNodeMiddle()
{
    int count=0;
    temp=head;

        if(temp==NULL)
        {
            printf("NO node is exist");
        }
        else
            {
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
            }
printf("enter the position");
scanf("%d",&pos);
if(pos>count)
{
    printf("Invalid position");
}
else
{
    int i=1;
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("enter the the value of Node");
    nn=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&nn->data);
    nn->next=temp->next;
    temp->next=nn;
}
    printf("New node is inserted");
}

void DeleteNodeEnd()
{
    struct node *pn;
    temp=head;
    while(temp->next!=NULL)
    {
        pn=temp;
        temp=temp->next;
    }
    if(temp==head)
        head=NULL;
        else
        pn->next=0;
    free(temp);
    printf("Node deleted from the last");
}

void DeleteNodeBegin()
{
    if(head==NULL)
    {
    printf("there is no Node exists");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    printf("The node has been deleted from beginning ");
}

void DeleteNodeMiddle()
{
    struct node *prev;
int i=1,pos;
printf("enter a position ");
scanf("%d",&pos);
temp=head;
while(i<pos)
{
    prev=temp;
    temp=temp->next;
    i++;
}
prev->next=temp->next;
free(temp);
    printf("Node deleted  from the Middle");
}

void traverse()
{
    if(head==NULL)
    {
        printf("NO node is exits");
    }
    else
    {
    printf("Traversing a list\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    }
}
