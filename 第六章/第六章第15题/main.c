
#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("请输入s1：");
	gets(s1);
	printf("请输入s2：");
	gets(s2);
	
	for(i=0;i<100;i++)
	{
		s1[i]=s2[i];
		if(s2[i]=='\0')break;
	}
	
	printf("\n结果：\n");
	printf("s1=");
	puts(s1);
	printf("s2=");
	puts(s2);
		
	return 0;
}
