#include<stdio.h>
int main()
{
int i,a,b[a];
printf(" please enter the size of the array");
scanf("%d",&a);
printf("\nplease enter the array elements");
for(i=1;i<=a;i++)
{
scanf("%d",&b[i]);
printf("\n\t %d %d",i,b[i]);
}
return 0;
}
