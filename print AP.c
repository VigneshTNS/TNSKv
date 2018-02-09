#include<stdio.h>
int main()
{
int i, first,diff,terms,sum=0;
printf("please Enter the no.of terms:");
scanf("%d",&terms);
printf("please enter the first term and common difference:");
scanf("%d%d",&first,&diff);
printf("\nAP series of %d terms is %d ",terms,first);
for(i=first;i<terms;i++)
{
sum=sum+first;
first=first+diff;
printf("\t%d",first);
}
return 0;
}
