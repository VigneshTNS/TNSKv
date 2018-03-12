#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter a number");
scanf("%d",&a);
if(a>0 && a<9)
{
printf("\nYES");
}
else
{
printf("\nNO");
}
getch();
return 0;
}
