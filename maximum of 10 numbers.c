#include<stdio.h>
int main()
{
int i,a[10],b;
printf("enter any 10 Numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<10;i++)
{
if(a[i]>b)
b=a[i];
}
printf("the maximum element is:%d",b);
return 0;
}
