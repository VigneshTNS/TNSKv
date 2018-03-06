#include<stdio.h>
int main()
{
int i,count=0;
char a[50];
printf("Enter a string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>96 && a[i]<123||a[i]>64 && a[i]<91||a[i]>47 && a[i]<58)
{
}
  else
  {
count=count+1;
}
}
printf("\n numbers in a string :%d",count);
return 0;
}
