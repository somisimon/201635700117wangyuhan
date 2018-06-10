#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i,j,k;          
    for (i='X';i<='Z';i++)
    for (j='X';j<='Z';j++)
    if (i!=j)
    for (k='X';k<='Z';k++)
    if (i!=k && j!=k)
    if (i!='X' && k!='X' && k!='Z')
    printf("对赛名单如下：\nA--%c\nB--%c\nC--%c\n",i,j,k);
	return 0;
}
