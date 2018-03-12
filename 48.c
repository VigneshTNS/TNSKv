#include<stdio.h>
int main()
{
int i,n,a[n],avg=0;
printf("\n Enter the range");
scanf("%d",&n);
printf("\n Enter the number of elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
avg=avg+a[i];
}
printf("\n average of these numbers = %d",avg/n);
return 0;
}
