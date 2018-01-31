#include<stdio.h>
int main()
{
	int m,rev=0,n,rem;
	printf("please Enter a number");
	scanf("%d",&m);
	n=m;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(m==rev)
	{
		printf("%is a palindrome number",m);
	}
	else
	printf("%is not  a palindrome number",m);
 return 0;
}


