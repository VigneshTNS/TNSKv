#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter any two elements:");
scanf("%d %d",&a,&b);
printf("\n before swap %d %d",a,b);
c=a;
a=b;
b=c;
printf("\nafter swap %d %d",a,b);
return 0;
}
