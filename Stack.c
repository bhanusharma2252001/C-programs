#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int stack[max],top=-1;
void push();
void pop();
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
    push();
    break;
   case 2:
    pop();
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
void push()
{
    int num;
    if(top>max-1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("enter a item to be insert");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }

}

void pop()
{
   if(top<max-1)
   {
       printf("stack underflow");
   }
   else
   {
    printf("the Popped element is %d",stack[top]);
    top--;
   }

}

void display()
{
    int i;
    if(top>0)
    {
  for(i=top;i>=0;i--)
  {
      printf("%d\n",stack[i]);
  }
    }
    else{
        printf("stack undeflow");
    }
}
