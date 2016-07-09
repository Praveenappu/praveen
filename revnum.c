#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter the numbers:\n");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
b=temp%10;
temp=temp/10;
printf("%d",b);
}
printf("\tis the reverse number");
getch();
}
