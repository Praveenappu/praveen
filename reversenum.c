#include<stdio.h>
#include<conio.h>
void main()
{
int z[10];
clrscr();
printf("Enter the numbers to reverse:\n");
scanf("%s",z);
strrev(z);
printf("The reverse number is:\n%s",z);
getch();
}
