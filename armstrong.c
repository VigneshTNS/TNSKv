#include<stdio.h>
int main()
{
	int a,b,r;
	printf("Enter a three digit number:");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		r=b%10;
		r=r+r*r*r;
		b=b/10;
		
	}
	if(b==a)
	{
		printf("%d is a armstrong number",a);
	}
	else
	printf("%d is a armstrong number",a);
	return 0;
}
