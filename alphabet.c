#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter the alphabet:\n");
scanf("%c",&a);
if(a>='a' && a<='z')
{
printf("alphabet number");
}
else
{
printf("not a alphabet");
}
getch();
}
