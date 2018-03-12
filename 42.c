#include<stdio.h>
#include<string.h>
int main()
{
int c,d;
char a[10],b[10];
printf("Enter two strings");
scanf("%s%s",a,b);
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("\n%s is a greater strng",a);
}
else
{
printf("\n%s is a greater strng",b);
}
return 0;
}
