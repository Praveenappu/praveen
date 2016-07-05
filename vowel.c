#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a;
printf("Enter the string :");
scanf("%c",&a);
if((a=='a') || (a=='e') || (a=='i') || (a=='o') || (a=='u'))
{
printf("It is vowel\n");
}
else
printf("It is constant\n");
getch();
}
