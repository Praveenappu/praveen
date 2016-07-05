#include<stdio.h>
#include<conio.h>
void main()
{
int x,i,add=0;
printf("enter the numbers :\n");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
add+=i;
}
printf("the natural number is:\n%d",add);
getch();
}
