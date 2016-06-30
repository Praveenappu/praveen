#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,sum=0;
printf("enter the numbers:%d\n");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
if((i%2)==0)
continue;
sum=sum+i;
}
printf("the addition of odd number is:%d",sum);
getch();
}
