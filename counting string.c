#include<stdio.h>
#include<string.h>
int main()
{
int i,len,sum;
sum=0;
char s[50];
printf("enter your string name without space:");
scanf("%s",&s);
len=strlen(s);
for(i=0;i<=len;i++)
{
if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
{
sum=sum+1;
}}
printf("number of character in a string=%d",sum);
return 0;
}
