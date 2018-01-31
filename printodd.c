#include<stdio.h>
int main()
{
int i,a,b;
printf("please enter a range");
scanf("%d%d",&a,&b);
printf("\n\t the odd numbers between %d and %d is:",a,b);
for(i=a;i<=b;i++)
if(i%2==1)
{
printf("%d",i);
printf("\t");
}
return 0;
}
