#include<stdio.h>
void main()
{
double number;
printf("enter the number");
scanf("%lf",&number);
if(number<0.0)
{
printf("number is negative");
}
elseif(number>0.0)
{
printf("number is positive");
}
else
{
printf("number is zero");
}
}
