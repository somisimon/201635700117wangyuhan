#include<stdio.h>
#include<string.h>
#define N 10
float a_stu[N];
int average1(int str1[][5],int m,int n);
int average2(int str1[][5],int m,int n);
int average3(int str1[][5],int m,int n);
int average4(int str1[][5],int m,int n);
int main()
{
	int str[10][5]={{87,88,92,67,78},{88,86,87,98,90},{76,75,65,65,78},{67,87,60,90,67},
	{77,78,85,64,56},{76,89,94,65,76},{78,75,64,67,77},{77,76,56,87,85},{84,67,78,76,89},
	{86,75,64,69,90}};
	int i,j;
    printf("每个学生的平均成绩\n"); 
   	average1(str,10,5);  
   	printf("每门课的平均成绩\n"); 
	average2(str,10,5); 
	average3(str,10,5); 
	printf("某个学生的平均成绩的偏差\n"); 
	average4(str,10,5);   
	return 0;
	
}
int average1(int str1[][5],int m,int n)
{
	int i,j;
 
	float average1;
	for(i=0;i<m;i++)
	{
	    float sum=0;
	  for(j=0;j<n;j++)
	  {
	  	sum+=str1[i][j];
	  	  
	  }  
	  	a_stu[i]=sum/n;
		printf("%.2f\n",a_stu[i]); 
	}
	
}
 
int average2(int str1[][5],int m,int n)
{
	int i,j;
 
	float average2;
	for(j=0;j<n;j++)
	{
	    float sum=0;
	  for(i=0;i<m;i++)
	  {
	  	sum+=str1[i][j];
	  	  
	  }  
	  	average2=sum/m;
		printf("%.2f\n",average2); 
	}
	
}
int average3(int str1[][5],int m,int n)
{
	int max=str1[0][0];
	int p,k,i,j;
	for(i=0;i<10;i++)
	{	
	  for(j=0;j<5;j++)
	    if(str1[i][j]>max)
	    {
	    	max=str1[i][j];
	    	k=i+1;
	    	p=j+1;
	    } 
	 
	}
	printf("最高分对应的学生和课程\n"); 
	printf("max=%d,k=%d,p=%d\n",max,k,p);
} 
int average4(int str1[][5],int m,int n)
{
	int i;
    float sum1=0,sum2=0;
	float average4;
	for(i=0;i<m;i++)
	{
	   
	 
	  	sum1+=a_stu[i];
	  	sum2+= a_stu[i]*a_stu[i];
	  	average4=sum2/m-(sum1/m)*(sum1/m);
		
	}
	printf("%.2f\n",average4); 
	
}
 
	

