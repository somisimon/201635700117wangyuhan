#include <stdio.h>
int main()
{
    int a[11][11];
    int i, j;
    for (i=1; i<=10; i++){
        for (j=1; j<=10; j++){
            if (j==1)
                a[i][j]= 1;
            else if (j>i){
                a[i][j]=0;
                break;
            }
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            if (a[i][j]!=0)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
