#include<stdio.h>
int main()
{
int i,a,b;
printf("please enter a number");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
b==1;
break;
}
if(b==0)
{
printf("\n%d is not a prime number",a);
}
else
printf("\n%d is a prime number",a); 
return 0;
}
