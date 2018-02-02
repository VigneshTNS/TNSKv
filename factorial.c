#include<stdio.h>
int main()
{
int i, a,fact=1;
printf("Please Enter a Number");
scanf("%d",&a);
for(i=1;i<=a;i++)
fact=fact*i;
printf("\n factorial of a %d is:%d",a,fact);
return 0;
}
