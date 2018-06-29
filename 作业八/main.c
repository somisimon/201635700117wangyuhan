#include<conio.h> 
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int getNum() 
{ 
int k;
k=rand()%20+1; 
return k;
} 
void main()
{
 int a[5][5]={0};
 int i=0,j=0;
 int num1=0,num2=0;
 srand((unsigned)time(NULL));
 for(i=0;i<5;i++)
  for(j=0;j<5;j++)
   a[i][j]=getNum();
 for(i=0;i<5;i++)
 {
  num1+=a[i][i];
  num2+=a[i][4-i];
 }
printf("\n生成的数组为：\n"); 
 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
   printf("%2d ",a[i][j]);
  printf("\n");
 }
 printf("\n对角线的和为：\n");
 printf("%d,%d",num1,num2);
 getch(); 
}
