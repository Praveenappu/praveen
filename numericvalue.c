#include<stdio.h>
#include<conio.h>
void main()
{
char b[10];
clrscr();
printf("Enter the string:\n");
scanf("%s",b);
if(isdigit(b))
{
printf("false\n");
}
else
{
printf("true\n");
}
getch();
}


