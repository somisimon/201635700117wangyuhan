#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    double sn=100,hn=sn/2;
    int n;
    for (n=2;n<=10;n++)
     {
     sn=sn+2*hn;  
     hn=hn/2;   
     }
     printf("第10次落地时共经过%f米\n",sn);
     printf("第10次反弹%f米\n",hn);
     return 0;
}
