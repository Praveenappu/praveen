#include<stdio.h>
void main()
{
int a,sum=0,temp,rem;
clrscr();
printf("Enter the integer:\n");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
rem=temp%10;
sum+=rem*rem*rem;
temp=temp/10;
printf("%d\n",rem);
}
if(a==sum)
{
printf("IT is an armstrong number\n");
}
else
{
printf("it is not an armstrong number\n");
}
getch();
}


