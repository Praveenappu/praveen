#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;
printf("ENTER THE NUMBERS:\n");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
b++;
}
printf("the answer is:%d",b);
getch();
}
