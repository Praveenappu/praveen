#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int base,exponent,a;
printf("Enter the base:\n");
scanf("%d",&base);
printf("Enter the exponent:\n");
scanf("%d",&exponent);
a=pow(base,exponent);
printf("THE POWER IS :\n%d",a);
getch();
}



