#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int i;
    double  bonus,b6,b7,b8,b9,b10;
    int  branch;
    b6=100000*0.1;
    b7=b6+100000*0.075;
    b8=b7+200000*0.05;
    b9=b8+200000*0.03;
    b10=b9+400000*0.015;
    printf("请输入利润i:");
    scanf("%d",&i);
    branch=i/100000;
    if (branch>10)  branch=10;
    switch(branch)
    {  case 0:bonus=i*0.1;
	   break;
       case 1:
	   bonus=b6+(i-100000)*0.075;
	   break;
       case 2:
       case 3:
	   bonus=b7+(i-200000)*0.05;
	   break;
       case 4:
       case 5:
	   bonus=b8+(i-400000)*0.03;
	   break;
       case 6:
       case 7:
       case 8:
       case 9:
	   bonus=b9+(i-600000)*0.015;
	   break;
       case 10:
	   bonus=b10+(i-1000000)*0.01;
    }
    printf("奖金是 %10.2f\n",bonus);
	return 0;
}
