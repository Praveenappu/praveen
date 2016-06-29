#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char b[15];
int a,c=0;
clrscr();
printf("Enter the string:\n");
scanf("%s",b);
for(a=0;b[a]!=0;a++)
{
if((b[a]=='a')||(b[a]=='e')||(b[a]=='i')||(b[a]=='o')||(b[a]=='u'))
{
c++;
}
}
printf("vowels is=%d",c);
getch();
}

