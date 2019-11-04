#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,num,rem=0,oct=0;
printf("Enter a number: ");
scanf("%d",&num);
while(num>8)
{
    rem=num%8;
    num=num/8;
    oct=rem*10+oct;
    i=10*i;
if(num<8)
    {
        oct=num*i+oct;
    }
}
printf("\nNumber in octal form: %d",oct);






getch();
}
