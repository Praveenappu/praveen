#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the no:\n");
scanf("%d",&a);
if(a>0)
{
printf("positive integer");
}
else if(a<0)
{
printf("negative integer");
}
else
{
printf("zero");
}
getch();
}
