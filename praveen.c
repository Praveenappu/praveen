#include<stdio.h>
void main()
{
char c[5];
printf("Enter the string\n");
scanf("%s",c);
strrev(c);
printf("The reversed string is:\n%s",c);
getch();
}


