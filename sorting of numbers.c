#include<stdio.h>
int main()
{
int i,j,b,a[b];
  float temp;
printf("\n Please Enter the range");
scanf("%d",&b);
printf("\nEnter the array values");
for(i=1;i<=b;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=b;i++)
{
for(j=i+1;j<=b;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
  for(i=0;i<=b;i++)
  {
printf("\n the sorted numbers is %d",a[i]);
}
  return 0;
}
