#include<stdio.h>
#include<conio.h>
int main()
{
int i,a=0,b=0,c[i],n=0;
clrscr();
printf("\nEnter a number:\n");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
a=a/10;
c[i]=b;c[i]
i++;
n++;
}
for(i=n-1;i>=0;i--)
{
printf("\t %d",c[i]);
}
getch();
return 0;
}
