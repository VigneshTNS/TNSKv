#include<stdio.h>
int main()
{
int i;
char a[50],count=0;
printf("Enter a string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(i>47 && i<58)
{
count=count+1;
}
}
printf("\n numbers in a string :%d",count);
return 0;
}
