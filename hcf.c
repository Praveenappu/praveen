#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("ENTER THE NUMBERS:\n");
scanf("%d\n%d",&a,&b);
while(a!=b)
{
if(a>b)
a-=b;
else
b-=a;
}
printf("the gcd of number is:%d",a);
getch();
}






