#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,prod;
clrscr();
printf("\n Enter two numbers:");
scanf("%d%d",&n,&m);
prod=n*m;
if(prod%2==0)
{
printf("\n %d is even",prod);
}
else
{
printf("\n %d is not even",prod);
}
getch();
return 0;
}
