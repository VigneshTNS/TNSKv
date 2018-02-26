#include<stdio.h>
int main()
{
int a,b,c,n;
a=0;b=1;
printf(" enter the number of elements:");
scanf("%d",&n);
printf("\n%d \n %d",a,b);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
printf("\n fibonacci series is :%d",a);
}
