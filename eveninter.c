#include <stdio.h>
void main()
{
   int num,m,n;
   printf("enter the intervals");
   scanf("%d%d",&m,&n);
   printf("Print even  Numbers in a given range m to n:\n");
   for (num = m; num <= n; num++)
   {
   if (num % 2 == 0)
   printf ("%d ", num);
   }
} 
