#include<stdio.h>
int main()
{
int i,n,a[n],max=a[0],min=a[0];
printf("Enter a number:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\nmaximum element is %d",max);
for(i=1;i<=n;i++)
{
if(a[i]<max)
{
min=a[i];
}
}
printf("\n Minimum element is %d",min);
return 0;
}




