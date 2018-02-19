#include<stdio.h>
int main()
{
int i,j,b,a[b],temp,median;
printf(" please Enter the size of the array:");
scanf("%d",&b);
printf("Please Enter the array elements");
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
}
}
}
median=a[(b/2+1)];
printf("Median of the %d numbers is:%d",b,median);
return 0;
}
