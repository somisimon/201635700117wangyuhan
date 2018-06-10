#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
  int i,n=20;
  double a=2,b=1,s=0,t;
  for (i=1;i<=n;i++)
   {
   s=s+a/b;
   t=a,
   a=a+b,
   b=t;
   }
   printf("sum=%16.10f\n",s);
   return 0;
 }
