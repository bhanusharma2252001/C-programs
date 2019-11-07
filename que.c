#include<stdio.h>
#include<conio.h>
#define MAX 50
int rear=-1,front=-1,que[],i;
void main()
{
    int choice;
    while(1)
    {
    printf("1.insert\n2.delete\n3.display\n4.quit\n\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("invalid choice");

    }
    }

}

void insert()
{
    int num;
    if(rear<MAX-1)
    {
        rear++;
        printf("enter a value to insert: ");
        scanf("%d",&que[rear]);

    }
    else
    {
    printf("que is already full");
    }
}

void delete()
{
if(front==rear)
{
    printf("que is empty");
}
else
{
    front++;
    printf("deleted value : %d",que[front]);

}
}

void display()
{

     for(i=0;i<=rear;i++)
     {
         printf("%d\n",que[i]);
     }
}
