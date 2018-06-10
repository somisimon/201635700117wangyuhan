#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){ 
    double s=0,t=1;
    int n;
    for (n=1;n<=20;n++)
    {
       t=t*n;
       s=s+t;
    }
    printf("1!+2!+...+20!=%22.15e\n",s);
    return 0;
}
