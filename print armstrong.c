#include<stdio.h>
int main()
{
    int i,a,b,c,result,z;
    printf("please enter a three digit interval:");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
      result=0;
        z=i;
     while(z!=0)
     {
      c=z%10;
      result=result+c*c*c;
      z=z/10;
     }
     if(z==result)
     printf("%d",z);
     }
     return 0;
    }
