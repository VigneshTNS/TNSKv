#include<stdio.h>
int main()
{
    char ch;
    printf("please enter a character:");
    scanf(" %c",&ch);
    if(ch>='a' & ch<='z'||ch>='A' & ch<='Z')
    {
        printf("\n %c\n You entered an alphabet",ch);
        }
else
printf("\n %c\n You entered a non alphabet character",ch);
return 0;
}
