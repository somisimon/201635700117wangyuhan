#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){  
    int a,b,num1,num2,temp;  
    printf("����������������m n��");  
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
    printf("���ǵ����Լ��Ϊ:%d\n",a);  
    printf("���ǵ���С������Ϊ:%d\n",num1*num2/a);  
}  
