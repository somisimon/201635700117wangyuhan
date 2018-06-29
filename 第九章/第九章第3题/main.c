#include<stdio.h>
	struct Student
	{
		int num;
		char name[20];
		int score[3];
	};
int input(struct Student stu[]);
int print(struct Student stu[]);
int main()
{
  	/*struct Student stu[5]={{10101,"Li Lin",{60,70,80}},{10102,"Zhang Fun",{75,90,80}},{10103,"Wang Min",{85,75,85}},
	  {10104,"Wen Wu",{60,72,80}},{10105,"Xiao Ming",{95,85,80}}};*/
  	struct Student stu[5];
  	 input(stu);
         print(stu);
 
}
  
int print(struct Student stu[])
{
     int i,j;
	 for(i=0;i<5;i++)
	 { printf("%5d%10s\t",stu[i].num,stu[i].name);	
	 	 for(j=0;j<3;j++)
		      printf("%d\t",stu[i].score[j]);
			printf("\n");	 
	 }
	 
}
 
int input(struct Student stu[])
{
      int i,j;
	 for(i=0;i<5;i++)
	 { printf("NO.:");
	 scanf("%d",&stu[i].num);
	 printf("name:");
	 scanf("%s",&stu[i].name);	
	 for(j=0;j<3;j++)
	 	 {
	 	 	printf("stu[%d].score[%d]:",i,j);
	 	 	scanf("%d",&stu[i].score[j]);
	 	 };
		      
	  printf("\n");	 
	 }
	 	
}

