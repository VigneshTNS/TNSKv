#include<stdio.h>
int main()
{
int i,k;
printf("Enter any two elements:");
scanf("%d %d",&i,&k);
printf("\n before swap %d %d",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("\nafter swap %d %d",i,k);
return 0;
}
