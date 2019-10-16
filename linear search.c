#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],item,n,i;
printf("Enter size of array: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter %d element: ",i);
scanf("%d",&arr[i]);
}
i=1;
printf("enter the item for searching: ");
scanf("%d",&item);
while(i<n)
{
    if(item==arr[i])
    {
        printf("\n%d is found in list at %d position",item,i);
    }
    i++;
    if(i>n)
    {
        printf("%d is not found in list",item);
    }
}


getch();
}
