#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	int i,j,k;
    for (i=0;i<=3;i++)
    {
	for (j=0;j<=2-i;j++)
      printf(" ");
    for (k=0;k<=2*i;k++)
      printf("*");
      printf("\n");
    }
    for (i=0;i<=2;i++)
    {
	for (j=0;j<=i;j++)
       printf(" ");
    for (k=0;k<=4-2*i;k++)
       printf("*");
       printf("\n");
    }
	return 0;
}
