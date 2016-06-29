#include<stdio.h>
#include<conio.h>
void main()
{
 char a[10];
 clrscr();
 printf("enter the day:\n");
 scanf("%s",a);
 if(strcmp(a,"sunday")==0)
 {
 printf("false");
 }
 else if((strcmp(a,"tuesday")==0||(a,"monday")==0||(a,"wednesday")==0||(a,"thursday")==0||(a,"friday")==0||(a,"saturday")==0))
 {
 printf("true");
 }
 else
 {
 printf("required data is not correct");
 }
 getch();
 }
