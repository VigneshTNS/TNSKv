#include<stdio.h>
int main()
{
char a[10];
int i;
printf("\n Enter a string");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
    if((a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122) && (a[i]>=48 && a[i]<=57))
    {
    printf("\n Yes");
      break;
    }
  
    else
    {
}
}
    printf("\n No");
    return 0;
}
