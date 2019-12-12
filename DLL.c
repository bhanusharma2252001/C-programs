#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL,*tail=NULL,*nn,*temp;
struct node* createNode()
{
nn=(struct node*)malloc(sizeof(struct node));
return(nn);
}
void main()
{
    int choice,choice2;
    while(1)
    {
    printf("\n1.Insertion\n2.Deletion\n3.Display");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("1. Insert node at end\n2. Insert node at begin \n3. Insert node at middle\nEnter your choice");
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
        printf("\n1.Delete node from end\n2.Delete Node from Beginning \n3.Delete Node from Middle");
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
            printf("Invalid choice");
        }
        break;
        case 3:
            printf("1.Forward Traversal \n2.Backward Traversal\n");
            scanf("%d",&choice2);
            switch(choice2)
            {
            case 1:
                fortraversal();

                break;
            case 2:


                backtraversal();
                break;
            default:
                printf("Invalid choice");
            }
            break;

            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice");
    }
    }
}

    void insertNodeEnd()
    {
    printf("\nEnter the data");
    nn=createNode();
    scanf("\n%d",&nn->data);
    nn->next=NULL;
    nn->prev=NULL;
    if(head==NULL)
    {
        head=tail=nn;
    }
    else
        {
            tail->next=nn;
            nn->prev=tail;
            tail=nn;
        }
        printf("\nNew node is inserted");
    }

    void insertNodeBegin()
    {
        nn=createNode();
        printf("Enter the value the data");
        scanf("%d",&nn->data);
        nn->next=head;
        head->prev=nn;
        head=nn;
        printf("New node is inserted ");

    }

    void insertNodeMiddle()
    {
        int i=2,pos;
        struct node *temp;
        printf("Enter the position");
        scanf("%d",&pos);
        temp=head;
    if(pos<0)
    {
        printf("Invalid position");

    }
    else
        {

        if(pos==1)
        {
            insertNodeBegin();
        }
        else
        {
      while(i<pos)
      {
          temp=temp->next;
          i++;
      }
      nn=createNode();
      printf("Enter the value");
      scanf("%d",&nn->data);
    nn->prev=temp;
    nn->next=temp->next;
    temp->next=nn;
    nn->next->prev=nn;
        }
    }

        }


DeleteNodeMiddle()
{
    struct node *temp;
    int i=1,pos;
    printf("enter position ");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("Link list empty");
    }
    else
        {
            temp=head;
    while(i<pos)
    {
        temp=temp->next;
    i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    }

}

DeleteNodeBegin()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    printf("Node has been deleted from Beginning");
    }
}

DeleteNodeEnd()
{
    if(tail==NULL)
    {
        printf("Linked List is empty");
    }
    else
        {
        temp=tail;
    temp->prev->next=NULL;
        tail=tail->prev;
        free(temp);

        }
        printf("The node has been deleted from the end of list");
}
void fortraversal()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}

void backtraversal()
{
    printf("Hello reverse");
}




