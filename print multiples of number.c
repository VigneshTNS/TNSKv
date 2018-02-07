#include<stdio.h>
int main()
{
int i,a,b;
printf("please enter a number:");
scanf("%d",&a);
printf("\n\tmultiples of %d is:",a);
for(i=1;i<=5;i++)
{
b=a*i;
printf("\t%d",b);
}
return 0;
}
