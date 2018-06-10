#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int sum = 0;
    int sun = 0;
    int a;
    int n;
    int i = 0;
    printf("请输入a值（1-9）：\n");
    printf("a = ");
    scanf("%d", &a);
    printf("请输入n值：\n");
    printf("n =");
    scanf("%d", &n);
    while (i<n)
    {
        sum = a + sum * 10;
        sun += sum;
        ++i;
    }
    printf("Sn = %d \n", sun );
    return 0; 
} 
