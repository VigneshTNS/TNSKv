#include<stdio.h>
#include<conio.h>
int main()
{
int a=0,b=1,n,c;
clrscr();
printf("\n Enter the range");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n %d ",a);
c=a+b;
a=b;
b=c;
}
getch();
return 0;
}
