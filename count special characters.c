#include<stdio.h>
int main()
{
int i,count=0;
char a[50];
printf("Enter a string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>32 && a[i]<48 || a[i]>57 && a[i]<65 || a[90]>90 && a[i]<97 || a[i]>122 && a[i]<127);
{
count=count+1;
}
}
printf("\n numbers in a string :%d",count);
return 0;
}
