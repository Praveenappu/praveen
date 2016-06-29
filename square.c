#include<stdio.h>
#include<conio.h>
void main()
{
int x,a,b,c,d;
clrscr();
printf("Enter the numbers:\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
x=((a+b)*(a+b)+(c+d)*(c+d));
printf("square of number is:%d",x);
getch();
}
