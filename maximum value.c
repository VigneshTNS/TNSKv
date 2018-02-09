#include<stdio.h>
void main()
{
int a[50],i,n,max;
printf(" please enter the range");
scanf("%d",&n);
printf(" please enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("the maximum value is %d",max);
}
