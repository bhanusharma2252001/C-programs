#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*tail,*temp,*nn,*prev;
int pos,i,length=1;
struct node* createNode()
{
    nn=(struct node*)malloc(sizeof(struct node));
    return(nn);
};
void main()
{
int choice,choice2;
while(1)
{
    printf("\n1.Insertion \n2.Deletion\n3.Traversal\n4.Quit\nEnter a choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
                printf("1.At end\n2.At begin\n3.At middle");
                scanf("%d",&choice2);
                switch(choice2)
                {
                case 1:
                    InsertAtEnd();
                    break;
                case 2:
                    InsertAtBegin();
                    break;
                case 3:
                    InsertAtMiddle();
                    break;
                default:
                    printf("Invalid choice");
                }
                break;
    case 2:
                printf("\n1.At end\n2.At begin \n3.At middle");
                scanf("%d",&choice2);
                switch(choice2)
                {
                case 1:
                    DeleteAtEnd();
                    break;
                case 2:
                    DeleteAtBegin();
                    break;
                case 3:
                    DeleteAtMiddle();
                    break;
                default:
                    printf("Invalid choice");
                }
                break;
        case 3:
                    printf("\n1.Forward Traversal\n2.Backward Traversal");
                    scanf("%d",&choice2);
                    switch(choice2)
                    {
                    case 1:
                        ForTraverse();
                        break;
                    case 2:
                        BackTraverse();
                        break;
                    default:
                        printf("Invalid choice");

                    }
                    break;
        case 4:
                    exit(0);
        default:
                    printf("Invalid option");


    }

}
}

void InsertAtEnd()
{
    nn=createNode();
    printf("Enter the value of Node");
    scanf("%d",&nn->data);
if(head==NULL)
{
    head=tail=nn;
    nn->next=head;
    nn->prev=head;
    length++;
}
else
{
    temp=head;
 while(temp->next!=head)
 {
     temp=temp->next;
 }
 nn->next=head;
 nn->prev=temp;
 temp->next=nn;
 head->prev=nn;
 tail=nn;
 length++;
}
 printf("New node inserted at end");

}

void InsertAtBegin()
{
nn=createNode();
printf("Enter the data");
scanf("%d",&nn->data);
if(head==NULL)
{
    head=tail=nn;
    nn->next=head;
    nn->prev=head;
    length++;
}
else
{
    nn->next=head;
    nn->prev=tail;
    head=nn;
    tail->next=head;
    length++;
}
printf("New Node is inserted at Begin");
}




void InsertAtMiddle()
{
nn=createNode();
printf("Enter the value of Node");
scanf("%d",&nn->data);
printf("Enter the position");
scanf("%d",&pos);

if(pos>length)
{
    printf("Invalid position");

}
else
{
    i=1;
    temp=head;
while(i<pos)
{
    prev=temp;
temp=temp->next;
i++;
}
nn->next=prev->next;
nn->prev=prev;
prev->next=nn;
temp->prev=nn;
length++;
}
printf("New node is inserted at %d position",i);
}

void DeleteAtEnd()
{
if(head==NULL)
{
    printf("Nodes doesn't exist in the list");
}
else
{
    if(temp->next!=head)
    {
        head=NULL;
        printf("Now any Node doesn't exist");
    }
    else
    {
        tail->prev->next=head;
        head->prev=tail->prev;
        tail=tail->prev;
    }
}
printf("Node has been deleted from the End of list");

}

void DeleteAtBegin()
{
if(head==NULL)
{
    printf("Nodes doesn't exist in the list");
}
else
{
    head=head->next;
    head->prev=tail;
    tail->next=head;
}
printf("New node has been deleted from the beginning of the list");
}

void DeleteAtMiddle()
{
printf("Enter the position");
scanf("%d",&pos);
if(pos>length)
{
    printf("Invalid position");

}
else
{
    i=1;
    temp=head;
    while(i<pos)
    {
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    temp->next->prev=prev;
    free(temp);
}
printf("New node has been deleted at %d position",i);
}

void ForTraverse()
{

temp=head;
while(temp->next!=head)
{
    printf("\n%d",temp->data);
    temp=temp->next;
}
printf("\n%d",temp->data);

}

void BackTraverse()
{
temp=tail;
while(temp->prev!=tail)
{
    printf("\n%d",temp->data);
    temp=temp->prev;

}
printf("\n%d",temp->data);
}
