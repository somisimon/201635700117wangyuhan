#include<stdio.h>
struct date
{
	int mouth;
	int year;
	int day;
};
int days(struct date stu)
{
	int i,sum;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	sum=stu.day;
	for(i=0;i<stu.mouth;i++)
	{
		sum+=a[i];
	}
	if(stu.mouth>2&&(stu.year&4==0&&stu.year%100!=0)||stu.year%400==0)
	{
		sum++;
	}
	return(sum);
}
int main()
{
	int days(struct date stu);
	struct date zy;
	printf("请输入年月日\n");
	scanf("%d%d%d",&zy.year,&zy.mouth,&zy.day);
	printf("%d\n",days(zy));
	return 0;
}
