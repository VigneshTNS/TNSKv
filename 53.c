#include<stdio.h>
#include<conio.h>
int main()
{
int num,n,sum=0;
clrscr();
printf("\n Enter a number:");
scanf("%d",&num);
while(num!=0)
{
n=num%10;
sum+=n;
num=num/10;
}
printf("\n Sum of numbers =%d",sum);
getch();
return 0;
}


