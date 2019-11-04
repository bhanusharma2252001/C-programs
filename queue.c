#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1,rear=-1,que[4],num,i;
void main()
{

int choice;
while(choice!=4){
printf("1.press 1 to insert an element\n2.Press 2 for delete an element\n3.press 3 to display all the elements\n4.Press 4 to exit");
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
    printf("Invalid choice");

}
    }
}

void insert()
{
if(rear==-1)
{
    rear++;
}
if(rear==4)
{
    printf("queue is already full");
}
else
{
    printf("enter the number to be inserted");
    scanf("%d",&num);
    que[rear]=num;
    rear++;
}
}

void delete()
{


}

void display()
{
for(i=0;i<=rear;i++)
{

    printf("\n%d",que[i]);
}

}
