#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the hours and mins:");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=a-c;
f=b-d;
printf("%d:%d",e,f);
return 0;
}
