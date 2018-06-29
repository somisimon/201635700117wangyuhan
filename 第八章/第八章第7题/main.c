#include<stdio.h>
#include<string.h>
int copy(char *p1,char *p2,int m);
int main()
{	
	char str1[40],str2[40];
	printf("输入第一个字符串：\n");	
	gets(str1);
	int m;
	printf("输入第m个字符开始：\n");	
	scanf("%d",&m);
	if(strlen(str1)<m)
	printf("错误");	
	else
	{
		copy(str1,str2,m);
		printf("%s",str2);
	}
	
	return 0;
}
 
int copy(char *p1,char *p2,int m)
{
 
int n;
n=0;
while(n<m-1)
{
	n++;
	p1++;
}
while(*p1!='\0')
{
	*p2=*p1;
	
	p1++;
	p2++;
}
}
 

