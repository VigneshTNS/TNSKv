#include<stdio.h>
#include<conio.h>
int main()
{
int i,num,even;
clrscr();
printf("\n Enter a number");
scanf("%d",&num);
for(i=num-1;i<=num;i--)
{
if(num%2==0)
{
even=i;
}
}
printf("\n Nearest even number=%d",even);
getch();
return 0;
}
