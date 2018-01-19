int main()
{
int a,b,c;
printf("please enter a number:a",a);
printf("plese enter a number:b",b);
printf("please enter anumber:c",c);
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is the largest number");
}
else if((b>a)&&(b>c))
{
printf("b is the largest number");
}
else
printf("c is the largest number");
return 0;
}
