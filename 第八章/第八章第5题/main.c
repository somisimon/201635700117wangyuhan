#include <stdio.h>
#define N 5              
void  main()
{
    int a[N] = {0}, i = 0, out_n = 0, call_n = 0, *p;
    p = a;
    while (1)  {      
      if(*p == 0)  { 
        if (out_n == (N - 1))  break; 
        call_n++;        
        call_n %= 3;    
        if(call_n == 0) {*p = 1; out_n++;} 
      }
      p++;    if (p == a + N)  p = a; 
    }
    printf("5个人中最后剩余者的编号是：%d\n", p + 1 - a);
}
