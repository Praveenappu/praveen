#include<stdio.h>
#include<conio.h>
void main()
{
int x[10];
int a,b,c;
clrscr();
printf("Enter 10 elements:");
for(a=0;a<10;a++)
scanf("%d",&x[a]);
for(a=0;a<9;a++)
{
for(b=a+1;b<10;b++)
{
if(x[a]<x[b])
{
c=x[a];
x[a]=x[b];
x[b]=c;
}
}
}
printf("\nsorted array elements:\n");
for(a=0;a<10;a++)
printf("%d",x[a]);
getch();
}
