#include"stdio.h"
#include <string.h>

int main(void)
{
char a[5][17];
  int i,j,k;
  for(i = 0; i < 5; i++)
  {
 for(j = 0; j < 2*i; j++)
 {
 a[i][j] = ' ';
 }
 for(k = j; k < j+9; k++)
 {
 if(k % 2 == 0)
 a[i][k] = '*';
 else
 a[i][k] = ' ';
 }
     a[i][k] = '\0';
  }
  for(i = 0; i < 5; i ++)
  {
 for(j = 0; j < strlen(a[i]); j++)
 printf("%c",a[i][j]);
 printf("\n");
  }
}
