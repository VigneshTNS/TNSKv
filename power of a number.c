#include<stdio.h>
int main(){
   
    int p,n;
    int a=1;
    int i = 0;
    printf("please enter a number and power: ");
    scanf("%d%d",&n,&p);
    for(i = 0;i<p;i++)
    {
        a = a * n;
    }
    printf("power of the entered number is = %d\n",a);
    return 0;
}
