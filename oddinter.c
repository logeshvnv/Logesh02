#include <stdio.h>
void main()
{
   int num;
   printf("enter the intervals");
    scanf("%d%d",&m,&n);
   printf("Print Odd Numbers in a given range m to n:\n");
   for (num = m; num <= n; num++)
   {
   if (num % 2 == 1)
   printf ("%d ", num);
   }
} 
