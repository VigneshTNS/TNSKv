#include<stdio.h>
int main()
{
int i,j,a[10],temp,b;
printf("\n Please Enter the range");
scanf("%d",&b);
printf("\nEnter the array values");
for(i=0;i<=b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=b;i++)
{
for(j=i+1;j<=b;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
printf("\n the sorted numbers is %d",temp);
}
