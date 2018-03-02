#include<stdio.h>
int main()
{
int i,count=0;
char a[1000];
printf(" enter a paragraph");
scanf("%[^\n]s",a[i]);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
count=count+1;
}
}
printf("\n number of lines=%d",count);
return 0;
}
