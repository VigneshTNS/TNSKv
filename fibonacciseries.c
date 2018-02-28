#include<stdio.h>
int main()
{
int i,a,b,c,n;
a=0;b=1;
printf(" enter the number of elements:");
scanf("%d",&n);
 printf("\n fibonacci series is:");
for(i=1;i<=n;i++)
{
  printf("\n%d",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
