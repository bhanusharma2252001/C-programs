#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int que[max],front=-1,rear=-1;
void insert();
void delete();
void display();
void main()
{
   int choice;
   while(1)
   {
   printf("\n1.Insert\n2.delete\n3.display\n4.exit\nEnter a choice: ");
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
    break;
   default:
    printf("Invalid option");
   }
   }
}

void insert()
{
int num;
if(rear==max-1)
printf("que is full can not be insert");
else
{
    if(rear==-1)
    front=0;
    rear++;
    printf("Enter a number to insert: ");
    scanf("%d",&num);
    que[rear]=num;
}
}

void delete()
{
    if(front==-1||front>rear)
    {
        printf("que is empty\n");
    }
    else
    {
        printf("the deleted number is %d",que[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front==-1)
    printf("there are no elements in que\n");
    for(i=front;i<=rear;i++)
    {
    printf("\n%d",que[i]);
    }
}
