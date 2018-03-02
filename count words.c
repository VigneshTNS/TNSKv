#include<stdio.h>
int main()
{
int i,count=0;
char a[50];
printf("Enter a sentence :");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count =count+1;
}
}
printf("\n number of spaces =%d",count+1);
return 0;
}
