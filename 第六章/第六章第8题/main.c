#include <stdio.h>
#pragma warning(disable:4996)
#define M 3
#define N 3
int main()
{
    int i, j, max, maxj, k, flag = 0;
    int a[M][N] = { 0 };
    printf("������%d�к�%d�о���\n", M, N);
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)              
            scanf("%d", &a[i][j]);             
    }
    printf("\n");
    for (i = 0; i < M; i++)
    {
        max = a[i][0];            
        maxj = 0;
        for (j = 0; j < N; j++)
        {
            if (a[i][j]>max)
            {
                max = a[i][j];
                maxj = j;
            }
        }
        flag = 1;
        for (k = 0; k < M; k++)
        {
            if (max>a[k][maxj])
                flag = 0;
                continue;
        }
        if (flag)
        {
            printf("���ڰ���a[%d][%d]=%d", i, maxj, max);
            break;
        }
    }
    if (!flag)
        printf("û�а���");
    printf("\n");
    system("pause");
    return 0;
}
