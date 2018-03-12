#include<stdio.h>
#include<conio.h>
int main()
{
int a[20];
clrscr();
int i,count=0;
printf("Enter the elements in a string");
scanf("%s",a);
for(i=0;i<20;i++)
{
if(a[i]>0 && a[i]>9)
{
count++;
}
}
printf("\nnumber of digits= %d",count);
getch();
return 0;
}
