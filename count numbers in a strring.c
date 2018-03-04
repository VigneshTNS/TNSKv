#include<stdio.h>
int main()
{
int i,count=0;
char a[50];
printf("Enter a string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>47 && a[i]<58)
{
count=count+1;
}
}
printf("\n numbers in your given string :%d",count);
return 0;
}
