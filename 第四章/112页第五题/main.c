#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;  
    double b;  
    printf("������һ��С��1000��������");  
    scanf("%d",&a);  
    if( a > 0 && a < 1000 )  
    {  
        b = sqrt(a);  
        printf("����ƽ�����ǣ�%2.0f\n",b);  
    }  
    else  
        printf("��������ݲ��ڷ�Χ�����������룺\n");  
	return 0;
}
