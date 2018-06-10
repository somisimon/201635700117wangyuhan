#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
    int i,j,k,n;
    printf("水仙花数有：");
    for (n=100;n<1000;n++)
    {
      i=n/100;
      j=n/10-i*10;
      k=n%10;
      if (n==i*i*i + j*j*j + k*k*k)
      printf("%d ",n);
    }
    printf("\n");
    return 0;
}
