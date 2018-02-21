#include<stdio.h>
int main()
{
int minutes,hour,m;
printf("please enter the minutes:");
scanf("%d",&minutes);
hour=minutes/60;
m=minutes%60;
printf("%d:%d",hour,m);
return 0;
}
