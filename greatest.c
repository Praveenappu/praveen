#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the three numbers :\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greatest");
}
else if(b>c)
{
printf("b is greatest");
}
else
{
printf("c is greatest");
}
getch();
}
