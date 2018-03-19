#include<stdio.h>
#include<conio.h>
int main()
{
int i,num,even;
  clrscr();
printf("\n Enter a number");
scanf("%d",&num);
if(num%2==0)
{
printf("\nNearest even number=%d",num);
}
else
{
    even=num-1;
printf("\n Nearest even number=%d",even);
}
  getch();
return 0;
}
