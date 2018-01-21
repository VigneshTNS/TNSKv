#include<stdio.h>
int main()
{
char ch;
printf("please Enter a alphabet:",ch);
scanf(" %c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='u')
{
printf("\n %c is a vowel",ch);
}else
printf("\n %c is a consonant");
return 0;
}
