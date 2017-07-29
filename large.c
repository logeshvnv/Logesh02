#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three integer number");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("a is a largest number");
}
elseif(b>=a&&b>=c)
{
printf("b is a largest number");
}
else
{
printf("c is a largest number");
}
}
