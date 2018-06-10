#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){  
    int a,b,num1,num2,temp;  
    printf("请输入两个正整数m n：");  
    scanf("%d%d",&num1,&num2);  
    if(num1<num2){  
        temp = num1;  
        num1 = num2;  
        num2 = temp;  
    }  
    a = num1;  
    b = num2;  
    while(b!=0){    
        temp = a%b;  
        a=b;  
        b=temp;  
    }  
    printf("它们的最大公约数为:%d\n",a);  
    printf("它们的最小公倍数为:%d\n",num1*num2/a);  
}  
