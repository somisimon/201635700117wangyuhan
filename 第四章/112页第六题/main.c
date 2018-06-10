#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
    printf("«Î ‰»Îxµƒ÷µ:\n");
    scanf("%f",&x);
    if (x<1)
    y=x;
    else if (x<10)
    y=2*x-1;
    else if (x>=10)
    y=3*x-11;
    printf("%.0f\n",y);
	return 0;
}
