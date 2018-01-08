#include<stdio.h>
int main()
{
int a;
printf("please enter a number:");
scanf("%d",&a);
if(a>=0)
{
	if (a>0)
	printf("you entered a positive number");
	else
	printf("you entered a zero");
}
else
printf("you entered a smallest number");
return 0;
}
