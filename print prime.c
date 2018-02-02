#include<stdio.h>
int main()
{
int i, a,b,c=0;
printf("please enter the range:");
scanf("%d%d",&a,&b);
printf("prime numbers between %d and %d is:",a,b);
while(a<b)
{
    for(i=a;i<=a/2;i++)
    {
        if(a%i==0)
        c==1;
    break;
if(c==1)
    printf("%d",i);
    printf("\t");
}
}
return 0;
}
