#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*nn,*temp,*tail;
struct node* createnode()
{
   nn=(struct node*)malloc(sizeof(struct node));
   return(nn);
}
void main()
{
    int choice;
    int choice2;
    while(1)
    {
    printf("\n---------------------------------------Circular Single linked list---------------------------------------------------");
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
nn=createnode();
printf("Enter the data of node");
scanf("%d",&nn->data);
temp=head;
if(head==NULL)
{
    head=tail=nn;
    tail->next=head;
}
else
{
    //while(temp->next!=head)
   // {
       // temp=temp->next;
    //}


    tail->next=nn;
    tail=nn;
    nn->next=head;

}
printf("New node is inserted at end");


}

void insertNodeBegin()
{
nn=createnode();
printf("Enter the data in new node");
scanf("%d",&nn->data);
if(head==NULL)
{
    head=tail=nn;
    tail->next=head;
}
else
{
    nn->next=head;
    head=nn;
    tail->next=head;
    //while(temp->next!=head->next)
    //{
        //temp=temp->next;
    //}
//temp->next=head;
}
printf("New node is inserted at beginning");
}

void insertNodeMiddle()
{
    int i=1,pos;
nn=createnode();
printf("Enter the data in new node");
scanf("%d",&nn->data);
printf("Enter the position");
scanf("%d",&pos);
temp=head;
while(i<pos)
{
    temp=temp->next;
    i++;
}
nn->next=temp->next;
temp->next=nn;
printf("New node is inserted at after %d position ",i);
}

void DeleteNodeEnd()
{
struct node *prev;
temp=prev=head;
if(head==NULL)
{
    printf("No element exists in list");
}
while(temp->next!=head)
{
    prev=temp;
    temp=temp->next;
}
prev->next=head;
printf("Node has been deleted at the end of list");
}

void DeleteNodeBegin()
{
head=head->next;
tail->next=head;
printf("Node has been deleted from the beginning of list");

}

void DeleteNodeMiddle()
{

    struct node *prev;
    int i=1,pos;
    if(head==NULL)
    {
        printf("No node exists");
    }
printf("enter the position");
scanf("%d",&pos);
temp=head;
while(i<pos)
{
    prev=temp;
    temp=temp->next;
    i++;
}
prev->next=temp->next;
printf("New node has deleted from the position %d",i);
}

void traverse()
{
    printf("\nTravarsing the elements");
temp=head;
while(temp->next!=head)
{
    printf("\n%d",temp->data);
    temp=temp->next;
}
printf("\n%d",temp->data);
}
