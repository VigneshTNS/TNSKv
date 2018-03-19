#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[10],max=a[0];
clrscr();
printf("\n Enter any 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n largest number=%d",max);
getch();
return 0;
}
