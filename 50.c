#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter a number");
scanf("%d",&a);
if(a%2==0)
{
printf("yes,%d is a power of 2",a);
}
else
{
printf("No,%d is not a power of 2",a);
}
getch();
return 0;
}
